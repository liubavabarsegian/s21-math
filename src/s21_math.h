#ifndef MATH_H_
#define MATH_H_

#include <limits.h>
#include <stdio.h>

#define s21_isnan(x) __builtin_isnan(x)
#define s21_isinf(x) __builtin_isinf(x)
#define S21_INFINITY 1.0 / 0.0
#define S21_NEGATIVE_INFINITY = -S21_INFINITY
#define S21_E 2.71828182845904523536028747
#define S21_NAN 0.0 / 0.0

int s21_abs(int x);
long double s21_ceil(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_factorial(long long int x);
long double s21_floor(double x);
long double s21_fmod(double x, double y) long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_pow_int(double base, long long int exp);

#endif