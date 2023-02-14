#include "s21_math.h"

long double s21_log(double x) {
  long double result = 0;
  int count = 0;
  int minus = 1;
  if (x == S21_INFINITY) {
    result = x;
  } else if (x == 0) {
    result = -S21_INFINITY;
  } else if (x < 0 || x == S21_NEGATIVE_INFINITY) {
    result = S21_NAN;
  } else {
    while (x >= S21_E) {
      x /= S21_E;
      count++;
    }
    x -= 1;  //так как ряд Тейлора для ln(1 + x)
    for (int i = 1; i < 100; i++) {
      result += minus * s21_pow_int(x, i) / i;
      minus *= -1;
    }
    result += count;
  }
  return result;
}

