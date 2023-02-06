#include "s21_math.h"

long double s21_log(double x) {
  if (s21_isinf(x)) return x;
  if (x == 0) return -S21_INFINITY;
  if (x < 0) return S21_NAN;

  long double result = 0;
  int count = 0;
  int minus = 1;
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
  return result;
}