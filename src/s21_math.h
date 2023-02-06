#ifndef MATH_H_
#define MATH_H_

#define s21_isnan(x) __builtin_isnan(x)
#define s21_isinf(x) __builtin_isinf(x)

long double s21_floor(double x);

#endif