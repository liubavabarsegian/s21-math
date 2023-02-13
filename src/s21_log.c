#include "s21_math.h"

long double s21_log(double x) {
  //if (s21_isinf(x)) return x;
  if (x == S21_INFINITY) return x;
  if (x == 0) return -S21_INFINITY;
  if (x < 0 || x == S21_NEGATIVE_INFINITY) return S21_NAN;

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
/*
long double s21_pow_int(double base, long long int exp) {
  long double result;

  if (exp == 0) return 1;
  result = 1;
  if (exp > 0) {
    for (long long int i = 1; i <= exp; i++) {
      result = result * base;
    }
  } else {
    exp *= -1;
    for (long long int i = 1; i <= exp; i++) {
      result = result / base;
    }
  }
  return result;
}
*/
