#include "s21_math.h"

long double s21_fmod(double x, double y) {
  int int_mod = x / y;
  long double result = (long double)x - int_mod * (long double)y;
  if (y == 0 || s21_isinf(x) || s21_isnan(x) || s21_isnan(y)) {
    result = S21_NAN;
  } else if (s21_isinf(y)) {
    result = (long double)x;
  }
  return result;
}
