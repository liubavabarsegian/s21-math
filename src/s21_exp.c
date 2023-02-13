#include <float.h>
#include "s21_math.h"

//для больших отрицательных чисел не работает походу
long double s21_exp(double x) {
    long double result = 1.0;
    long double sum = 1.0;
    long double i = 1.0;
    if (x == -S21_INFINITY) return 0;
    if (x == S21_INFINITY) return S21_INFINITY;
    //for (int i = 0; i < 200; i++) {
    while (s21_fabs(result) > S21_EPS) {
        result = result * x / i;
        i += 1.0;
        sum += result; 
        if (sum > DBL_MAX) {
            sum = S21_INFINITY;
            if (x < 0) {
                sum = 1 / sum;
            }
            break;
        }
    }
    return sum;
}

//long long int s21_factorial(int x) {
//  if (x == 1 || x == 0) return 1;
//  if (x > 1) return x * s21_factorial(x - 1);
//  return S21_NAN;
//}
