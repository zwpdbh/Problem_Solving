//
// Created by zwpdbh on 2018/8/23.
//

#ifndef PROBLEM_SOLVING_PARALLEL_ACCUMULATE_HPP
#define PROBLEM_SOLVING_PARALLEL_ACCUMULATE_HPP

#include <numeric>
#include <thread>
#include <vector>

/**A naive parallel version of std::accumulate*/

template <typename Iterator, typename T>
struct accumulate_block
{
    // overloading function call operator
    void operator()(Iterator first, Iterator last, T &result)
    {
        result = std::accumulate(first, last, result);
    }
};

template <typename Iterator, typename T>
T parallel_accumulate(Iterator first, Iterator last, T init)
{
    long length = std::distance(first, last);
    if (!length) {
        return init;
    }

    const long min_per_thread = 25;
    const long max_thread = (length + min_per_thread - 1) / min_per_thread;

    const long hardware_threads = std::thread::hardware_concurrency();

    const long num_threads = std::min(hardware_threads != 0 ? hardware_threads: 2, max_thread);
    const long block_size = length / num_threads;

    std::vector<T> results(num_threads);
    std::vector<std::thread> threads(num_threads - 1);

    Iterator block_start = first;

    /**num_threads - 1 because you already have one*/
    for (long i = 0; i < num_threads - 1; ++i) {
        Iterator block_end = block_start;
        std::advance(block_end, block_size);

        // each thread call accumulate_block's function call operator()
        threads[i] = std::thread(accumulate_block<Iterator, T>(), block_start, block_end, std::ref(results[i]));
        block_start = block_end;
    }

    /**After launched all the threads, this thread can then process the final block.
     * This is where you take account of any uneven division.*/
    accumulate_block<Iterator, T>()(block_start, last, results[num_threads - 1]);

    /**wait for all threads spawned*/
    std::for_each(threads.begin(), threads.end(), std::mem_fn(&std::thread::join));

    return std::accumulate(results.begin(), results.end(), init);
}

#endif //PROBLEM_SOLVING_PARALLEL_ACCUMULATE_HPP
