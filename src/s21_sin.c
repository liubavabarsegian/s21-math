#include "s21_math.h"

long double s21_sin(double x) {
  long double res = 0.0;
  if (x == S21_INFINITY || x == -S21_INFINITY) {
    res = S21_NAN;
  } else {
    while (x > S21_PI) {
      x = x - 2 * S21_PI;
    }
    while (x < -S21_PI) {
      x = x + 2 * S21_PI;
    }
    res = x;
    int i = 1;
    long double sum = x;
    while (s21_fabs(sum) > S21_EPS) {
      sum = (-sum * x * x) / ((2 * i + 1) * (2 * i));
      res += sum;
      i++;
    }
  }
  return res;
}
