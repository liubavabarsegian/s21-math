#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_fabs_test_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_fabs(x), fabs(x), TEST_EPS);
}
END_TEST

START_TEST(s21_fabs_test_2) {
  double x = -1.1;
  ck_assert_ldouble_eq_tol(s21_fabs(x), fabs(x), TEST_EPS);
}
END_TEST

START_TEST(s21_fabs_test_3) {
  double x = DBL_MAX;
  ck_assert_ldouble_eq_tol(s21_fabs(x), fabs(x), TEST_EPS);
}
END_TEST

START_TEST(s21_fabs_test_4) {
  double x = DBL_MIN;
  ck_assert_ldouble_eq_tol(s21_fabs(x), fabs(x), TEST_EPS);
}
END_TEST

START_TEST(s21_fabs_test_5) {
  double x = INFINITY;
  ck_assert_ldouble_infinite(s21_fabs(x));
  ck_assert_ldouble_infinite(fabs(x));
}
END_TEST

START_TEST(s21_fabs_test_6) {
  double x = -INFINITY;
  ck_assert_ldouble_infinite(s21_fabs(x));
  ck_assert_ldouble_infinite(fabs(x));
}
END_TEST

START_TEST(s21_fabs_test_7) {
  double x = NAN;
  ck_assert_ldouble_nan(s21_fabs(x));
  ck_assert_ldouble_nan(fabs(x));
}
END_TEST

START_TEST(s21_fabs_test_8) {
  double x = -NAN;
  ck_assert_ldouble_nan(s21_fabs(x));
  ck_assert_ldouble_nan(fabs(x));
}
END_TEST

TCase *s21_tc_fabs(void) {
  TCase *tc_fabs = tcase_create("s21_fabs");

  tcase_add_test(tc_fabs, s21_fabs_test_1);
  tcase_add_test(tc_fabs, s21_fabs_test_2);
  tcase_add_test(tc_fabs, s21_fabs_test_3);
  tcase_add_test(tc_fabs, s21_fabs_test_4);
  tcase_add_test(tc_fabs, s21_fabs_test_5);
  tcase_add_test(tc_fabs, s21_fabs_test_6);
  tcase_add_test(tc_fabs, s21_fabs_test_7);
  tcase_add_test(tc_fabs, s21_fabs_test_8);

  return tc_fabs;
}
