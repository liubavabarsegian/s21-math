#include "s21_math.h"

long double s21_fabs(double x) {
  if (s21_isnan(x)) { return S21_NAN; }
  return ((x < 0) ? -1 * (long double)x : (long double)x);
}