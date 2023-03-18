#include "s21_math.h"

long double s21_fabs(double x) {
  long double result = 0.0;
  if (s21_isnan(x)) {
    result = S21_NAN;
  } else if (x < 0) {
    result = -1 * (long double)x;
  } else
    result = (long double)x;
  return result;
}
