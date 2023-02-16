#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_ceil_test_1) {
  double x = 0.1;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), TEST_EPS);
}
END_TEST

START_TEST(s21_ceil_test_2) {
  double x = -0.1;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), TEST_EPS);
}
END_TEST

START_TEST(s21_ceil_test_3) {
  double x = DBL_MAX;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), TEST_EPS);
}
END_TEST

START_TEST(s21_ceil_test_4) {
  double x = DBL_MIN;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), TEST_EPS);
}
END_TEST

START_TEST(s21_ceil_test_5) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_ceil(x), ceil(x), TEST_EPS);
}
END_TEST

START_TEST(s21_ceil_test_6) {
  double x = NAN;
  ck_assert_ldouble_nan(s21_ceil(x));
  ck_assert_ldouble_nan(ceil(x));
}
END_TEST

START_TEST(s21_ceil_test_7) {
  double x = -NAN;
  ck_assert_ldouble_nan(s21_ceil(x));
  ck_assert_ldouble_nan(ceil(x));
}
END_TEST

START_TEST(s21_ceil_test_8) {
  double x = INFINITY;
  ck_assert_ldouble_infinite(s21_ceil(x));
  ck_assert_ldouble_infinite(ceil(x));
}
END_TEST

START_TEST(s21_ceil_test_9) {
  double x = -INFINITY;
  ck_assert_ldouble_infinite(s21_ceil(x));
  ck_assert_ldouble_infinite(ceil(x));
}
END_TEST

TCase *s21_tc_ceil(void) {
  TCase *tc_ceil = tcase_create("s21_ceil");

  tcase_add_test(tc_ceil, s21_ceil_test_1);
  tcase_add_test(tc_ceil, s21_ceil_test_2);
  tcase_add_test(tc_ceil, s21_ceil_test_3);
  tcase_add_test(tc_ceil, s21_ceil_test_4);
  tcase_add_test(tc_ceil, s21_ceil_test_5);
  tcase_add_test(tc_ceil, s21_ceil_test_6);
  tcase_add_test(tc_ceil, s21_ceil_test_7);
  tcase_add_test(tc_ceil, s21_ceil_test_8);
  tcase_add_test(tc_ceil, s21_ceil_test_9);

  return tc_ceil;
}
