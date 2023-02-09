#include "s21_math.h"

long double s21_fmod(double x, double y) {
  if (y == 0 || s21_isinf(x) || s21_isnan(x) || s21_isnan(y)) return S21_NAN;

  if (s21_isinf(y)) return (long double)x;

  int int_mod = x / y;
  long double result = (long double)x - int_mod * (long double)y;
  return result;
}