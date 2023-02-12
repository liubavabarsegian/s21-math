#include "s21_math.h"

long double s21_cos(double x) {
    long double res = 0.0;
    if (x == S21_INFINITY || x == -S21_INFINITY) {
        res = S21_NAN;
    } else if (x == S21_PI / 2 || x == -S21_PI / 2) {
        res = 0.0;
    } else {
        while (x > S21_PI) {
            x = x - 2 * S21_PI;
        }
        while (x < -S21_PI) {
            x = x + 2 * S21_PI;
        }
        res = 1; 
        int i = 1;
        long double sum = 1;
        while (s21_fabs(sum) > S21_EPS) {
            sum = (-sum * x * x) / ((2.0 * i - 1) * (2.0 * i));
            res += sum;
            i++;
        }
    }
    return res;
}    
