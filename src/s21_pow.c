#include "s21_math.h"

//скорее всего не все исходы учла
long double s21_pow(double base, double exp) {
  long double result = 0;
  int is_base_negative = 0;
  is_base_negative = base < 0;
  int is_pow_negative = 0;
  is_pow_negative = exp < 0;
  // первый вырожденный случай exp = 0
  if (exp == 0) {
    result = 1;
  // второй вырожденный случай base = 1
  } else if (base == 1) {
    result = 1;
  // третий вырожденный случай base = -1
  } else if (base == -1) {
    if (s21_isinf(exp) || s21_fmod(exp, 2) == 0) {
      result = s21_fabs(base);
    } else if (exp == (long long int)exp) {
      result = base;
    } else result = S21_NAN;
  // четвертый вырожденный случай: при нецелом exp
  // функция не определена для base < 0
  // проверка s21_isinf(exp) выполнена, т.к. infinity тоже нецелое число,
  // но с exp = INFINITY оригинальный pow работает
  } else if (is_base_negative && !s21_isinf(base) &&
    exp != (long long int)exp && !s21_isinf(exp)) {
    result = S21_NAN;
  } else {
    if (is_base_negative) {
      base = -base;
      if (is_pow_negative) exp = -exp;
      // a^x = e ^(ln (a ^x)) = e ^(x * lna)
      result = s21_exp(exp * s21_log(base));
      if (is_pow_negative) {
        result = 1. / result;
      }
      if (s21_fmod(exp, 2) != 0) result = -result;
    } else {
      if (is_pow_negative) exp = -exp;
      result = s21_exp(exp * s21_log(base));
      if (is_pow_negative) {
        result = 1. / result;
      }
    }
    if (s21_isinf(result)) {
      if (s21_isinf(exp) || s21_fmod(exp, 2) == 0 || exp != (long long int)exp) {
        result = s21_fabs(result);
      }
    }
  }
  return result;
}
// 4 вырожденный случай первая попытка
// } else if (is_base_negative && !s21_isinf(base) && s21_fabs(exp) < 1) {

// else if (s21_isinf(exp) && s21_isinf(base) && base < 0) result = S21_INFINITY;

/*if (s21_isinf(base) || s21_isinf(exp)) {
    result = S21_NAN;
  } else if (base < 0 && exp != (long long int)exp) {
    result = S21_NAN;
  } else*/ 
