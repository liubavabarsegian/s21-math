#include <check.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include "s21_math.h"

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif
#ifndef M_PI_2
    #define M_PI_2 1.57079632679489661923
#endif
#define TEST_EPS 0.000001

TCase *s21_tc_abs(void);
TCase *s21_tc_exp(void);
TCase *s21_tc_fabs(void);
TCase *s21_tc_acos(void);
TCase *s21_tc_asin(void);
TCase *s21_tc_atan(void);
TCase *s21_tc_ceil(void);
TCase *s21_tc_floor(void);
TCase *s21_tc_fmod(void);
TCase *s21_tc_log(void);
TCase *s21_tc_pow(void);
TCase *s21_tc_sin(void);
TCase *s21_tc_cos(void);
TCase *s21_tc_tan(void);
TCase *s21_tc_sqrt(void);
