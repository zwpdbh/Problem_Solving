//
// Created by zwpdbh on 2018/8/22.
//

#include <iostream>
#include <cmath>
#include <cfloat>
#include <iomanip>
#include "../common/common.hpp"

using namespace std;

/**Use iteration to compute the function to reach a specified estimation error with max limited loops
 * the computed iteration function is passed by function pointer */
void iterMeth(double value, double es, int &maxit, double (*func)(double, int), double *);


/**Iteration method function for E:
 * E^(x) = 1 + x + x^2/2 + x^3/3! + ... + x^n/n!*/
double appE(double x, int n) {
    return pow(x, n) / factorial(n);
}

double getRelativeError(double t, double a) {
    return (abs(t - a) / t) * 100;
}

int main() {
    double value = 0.5;
    int num_iter = 100;
    double es = 0.000001;

    double results[num_iter];
    results[0] = 1;

    iterMeth(value, es, num_iter, appE, results);
    cout << "value = " << results[num_iter] << ", ea = " << results[num_iter] << ", iter = " << num_iter << endl;

    cout << "The true value of E^(0.5) = " << exp(value) << endl;
    cout << "The relative true error = " << getRelativeError(exp(value), results[num_iter]) << endl;
    cout << endl;

    int column1 = 4;
    int column2 = 20;
    int column3 = 20;
    int column4 = 20;
    int precision = 10;

    cout << setw(column1) << "Term" << setw(column2) << "Result" << setw(column3) << "Error_t%" << setw(column4) << "Error_a%" << endl;
    /**from 0 to number of iteration inclusively because the iteration method run loop, say 10 times
     * then the series of function has 11 items*/
    for(int i = 0; i <= num_iter; i++) {
        cout << setw(column1) << i + 1
            << setw(column2) << setprecision(precision) << results[i]
            << setw(column3) << setprecision(5) << getRelativeError(exp(value), results[i])
            << setw(column4) << setprecision(precision) << (i == 0 ? -100 : getRelativeError(results[i], results[i-1]))
            << endl;
    }

    return 0;
}


void iterMeth(double value, double es, int &maxit, double (*func)(double, int), double *results) {
    double ea = 100;    // ea means estimated relative approximation error in %
    int iter;

    for (iter = 1; iter <= maxit; iter++) {
        results[iter] = results[iter -1] + func(value, iter);
        if (results[iter] != 0) {
            ea = abs((results[iter] - results[iter - 1])/results[iter]) * 100; // because it measured with %, so multiple 100
        }
        if (ea <= es)
            break;
    }
    maxit = iter;
}