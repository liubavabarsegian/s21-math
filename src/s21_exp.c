#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 1.0;
  long double sum = 1.0;
  long double i = 1.0;
  if (x == -S21_INFINITY) sum = 0;
  if (x == S21_INFINITY) sum = S21_INFINITY;
  if (x != S21_INFINITY && x != -S21_INFINITY) {
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
  }
  return sum;
}
