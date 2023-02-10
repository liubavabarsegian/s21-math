#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_fabs_positive) {
  double a = 1 * pow(10, -6);
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
}
END_TEST

START_TEST(s21_fabs_negative) {
  double a = -1 * pow(10, -6);
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
}
END_TEST

START_TEST(s21_fabs_null) {
  double a = 0 * pow(10, 0);
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
}
END_TEST

START_TEST(s21_fabs_dbl_max) {
  double a = DBL_MAX;
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
}
END_TEST

START_TEST(s21_fabs_dbl_min) {
  double a = DBL_MIN;
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
}
END_TEST

START_TEST(s21_fabs_nan) {
  double a = NAN;
  ck_assert_ldouble_nan(s21_fabs(a));
}
END_TEST

TCase *s21_tc_fabs(void) {
  TCase *tc_fabs = tcase_create("s21_fabs");

  tcase_add_test(tc_fabs, s21_fabs_positive);
  tcase_add_test(tc_fabs, s21_fabs_negative);
  tcase_add_test(tc_fabs, s21_fabs_null);
  tcase_add_test(tc_fabs, s21_fabs_dbl_max);
  tcase_add_test(tc_fabs, s21_fabs_dbl_min);
  tcase_add_test(tc_fabs, s21_fabs_nan);

  return tc_fabs;
}
