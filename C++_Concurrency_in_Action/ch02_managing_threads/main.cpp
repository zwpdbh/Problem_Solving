//
// Created by zwpdbh on 2018/8/21.
//

#include <iostream>
#include <string>
#include <thread>
#include <vector>
#include <functional>

using namespace std;

void do_work(unsigned id) {
    cout << "do work with id: " << id << endl;
}

struct func {
    int &i;

    explicit func(int &i_) : i(i_) {}
    // function call operator()
    void operator()() {
        for (int j = 0; j < 100; j++) {
            cout << "do_something with i: " << i  << endl;
        }
    }
};

/**Show the case when the thread is not guarded, if the thread is not detached or joined
 * in the scope, then the program will be terminated
 * It also shows the potential access to dangling reference problem.*/
void demoOfNotGuardedThread() {
    int some_local_state = 0;
    func my_func(some_local_state);
    thread my_thread(my_func);

    /**If the thread is still running, then the next call to do_something(i)
     * will access an already destroyed variable.*/
    my_thread.detach();
}

/**RAII(Resource Acquisition is Initialization), then the execution reaches the end of the scope:
 * the destructor of the object is called first, and the thread is joined with in the destructor */
void demoOfUsingRAIIToWaitForAthreadToComplete() {
    class thread_guard {
        thread &t;
    public:
        explicit thread_guard(thread &t_) : t(t_) {}
        ~thread_guard() {
            if (t.joinable()) {
                t.join();
            }
        }
        thread_guard(thread_guard const &) = delete; // disable default copy constructor
        thread_guard &operator=(thread_guard const &)=delete; // disable default assignment operator
    };

    int some_local_state = 0;
    func my_func(some_local_state);
    thread t(my_func);
    thread_guard g(t);

    cout << "do_something_in_current_thread()" << endl;
}

/**Another way to guard the thread: Use move to create a scoped_thread
 * Currently not working*/
void demo_scoped_thread() {
    class Scoped_thread {
        thread t;
    public:
        explicit Scoped_thread(thread t_) : t(move(t_)) // use move !
        {
            if (!t.joinable()) {
                throw std::logic_error("No thread");
            }
        }

        ~Scoped_thread() {
            t.join();
        }

        Scoped_thread(const Scoped_thread &) = delete;
        Scoped_thread &operator=(const Scoped_thread &) = delete;
    };


    int some_local_state = 0;
    Scoped_thread scoped_thread(thread(func(some_local_state)));

    cout << "do_something in current thread " << endl;
}

/***/
void demoSpawSomeThreads() {
    vector<thread> threads;
    for (unsigned i = 0; i < 20; i++) {
        threads.emplace_back(thread(do_work, i));
    }
    // std::mem_fn, convert member function to function object
    std::for_each(threads.begin(), threads.end(), std::mem_fn(&std::thread::join));
}

int main() {

//    demoOfNotGuardedThread();

//    demoOfUsingRAIIToWaitForAthreadToComplete();

    demo_scoped_thread();

    return 0;
}