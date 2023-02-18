#include "s21_math.h"

long double s21_log(double x) {
  double result = 0;
  double prev_result = 0;
  int count = 0;
  // int minus = 1;
  if (x == S21_INFINITY) {
    result = x;
  }
  if (x == 0) {
    result = -S21_INFINITY;
  }
  if (x == 1) {
    result = 0;
  }
  if (x < 0 || x == S21_NEGATIVE_INFINITY) {
    result = S21_NAN;
  }
  if (x != S21_INFINITY && x != 0 && x != 1 &&
      !(x < 0 || x == S21_NEGATIVE_INFINITY)) {
    while (x >= S21_E) {
      x /= S21_E;
      count++;
    }
    // x -= 1;  //так как ряд Тейлора для ln(1 + x)
    for (int i = 1; i < 500; i++) {
      // result += minus * s21_pow_int(x, i) / i;
      // minus *= -1;
      prev_result = result;
      result = prev_result +
               2 * (x - s21_exp(prev_result)) / (x + s21_exp(prev_result));
    }
    result += count;
  }
  return result;
}
