#include "math.h"

long double s21_ceil(double x) {
    if (s21_isnan(x) || s21_isinf(x))
        return x;
    long double result = (long long int)x;
    if (x != result && x < 0) {
        result -= 1;
    }
    return result;
}