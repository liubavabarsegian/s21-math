#include "s21_math.h"

long double s21_ceil(double x) {
  long double result = (long long int)x;
  if (s21_isnan(x) || s21_isinf(x)) {
    result = (long double)x;
  } else if (x != result && x > 0) {
    result += 1;
  }
  return result;
}
