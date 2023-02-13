#include "s21_math.h"

long double s21_atan(double x) {
    long double res = x;
    long double sum = x;
    int i = 1;
    if (x == 1) {
        res = S21_PI;
    } else if (x == -1) {
        res = -S21_PI;
    } else if ((x < 1) && (x > -1)) {
        while (s21_fabs(sum) > S21_EPS) {
            sum = -1 * sum * x * x * (2 * i - 1) / (2 * i + 1);
            res += sum;
        } 
    } else if (x > 1) {
        res = S21_PI / 2 - s21_atan(1 / x);
    } else if (x < -1) {
        res = -S21_PI / 2 - s21_atan(1 / x);
    }
    return res;
}

