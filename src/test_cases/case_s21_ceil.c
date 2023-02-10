#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_ceil_positive) {
  double a = 1 * pow(10, -6);
  ck_assert_ldouble_eq(s21_ceil(a), ceil(a));
}
END_TEST

START_TEST(s21_ceil_negative) {
  double a = -1 * pow(10, -6);
  ck_assert_ldouble_eq(s21_ceil(a), ceil(a));
}
END_TEST

START_TEST(s21_ceil_null) {
  double a = 0 * pow(10, 0);
  ck_assert_ldouble_eq(s21_ceil(a), ceil(a));
}
END_TEST
/*
START_TEST(s21_ceil_dbl_max) {
  double a = DBL_MAX;
  ck_assert_ldouble_eq(s21_ceil(a), ceil(a));
}
END_TEST
*/
START_TEST(s21_ceil_dbl_min) {
  double a = DBL_MIN;
  ck_assert_ldouble_eq(s21_ceil(a), ceil(a));
}
END_TEST

START_TEST(s21_ceil_nan) {
  double a = NAN;
  ck_assert_ldouble_nan(s21_ceil(a));
}
END_TEST

TCase *s21_tc_ceil(void) {
  TCase *tc_ceil = tcase_create("s21_ceil");

  tcase_add_test(tc_ceil, s21_ceil_positive);
  tcase_add_test(tc_ceil, s21_ceil_negative);
  tcase_add_test(tc_ceil, s21_ceil_null);
  //  tcase_add_test(tc_ceil, s21_ceil_dbl_max);
  tcase_add_test(tc_ceil, s21_ceil_dbl_min);
  tcase_add_test(tc_ceil, s21_ceil_nan);

  return tc_ceil;
}
