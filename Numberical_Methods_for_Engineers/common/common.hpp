//
// Created by zwpdbh on 2018/8/23.
//

#ifndef PROBLEM_SOLVING_COMMON_HPP
#define PROBLEM_SOLVING_COMMON_HPP

double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; ++i) {
        result = result * i;
    }
    return result;
}

#endif //PROBLEM_SOLVING_COMMON_HPP
