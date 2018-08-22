//
// Created by zwpdbh on 2018/8/21.
//

#include <iostream>
#include <string>
#include <thread>

using namespace std;

struct func {
    int &i;

    func(int &i_) : i(i_) {}

    void operator()() {
        for (int j = 0; j < 100000; ++j) {
            cout << i << endl;
        }
    }
};

int main() {
    int some_local_state = 0;
    func my_func(some_local_state);
    thread my_thread(my_func);
    my_thread.join();

    return 0;
}