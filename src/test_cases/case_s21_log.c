#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_log_test_1) {
  double x = 0;
  ck_assert_ldouble_infinite(s21_log(x));
  ck_assert_ldouble_infinite(log(x));
}
END_TEST

START_TEST(s21_log_test_2) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), TEST_EPS);
}
END_TEST

START_TEST(s21_log_test_3) {
  double x = 26941.289;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), TEST_EPS);
}
END_TEST

START_TEST(s21_log_test_4) {
  double x = -12.36;
  ck_assert_ldouble_nan(s21_log(x));
  ck_assert_ldouble_nan(log(x));
}
END_TEST

START_TEST(s21_log_test_5) {
  double x = DBL_MAX;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), TEST_EPS);
}
END_TEST

START_TEST(s21_log_test_6) {
  double x = DBL_MIN;
  // double x = FLT_MIN;
  // double x = 0.00000001;
  // double x = FLT_EPSILON;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), TEST_EPS);
}
END_TEST

START_TEST(s21_log_test_7) {
  double x = -DBL_MIN;
  ck_assert_ldouble_nan(s21_log(x));
  ck_assert_ldouble_nan(log(x));
}
END_TEST

START_TEST(s21_log_test_8) {
  double x = INFINITY;
  ck_assert_ldouble_infinite(s21_log(x));
  ck_assert_ldouble_infinite(log(x));
}
END_TEST

START_TEST(s21_log_test_9) {
  double x = NAN;
  ck_assert_ldouble_nan(s21_log(x));
  ck_assert_ldouble_nan(log(x));
}
END_TEST

START_TEST(s21_log_test_10) {
  double x = -INFINITY;
  ck_assert_ldouble_nan(s21_log(x));
  ck_assert_ldouble_nan(log(x));
}
END_TEST

START_TEST(s21_log_test_11) {
  double x = -NAN;
  ck_assert_ldouble_nan(s21_log(x));
  ck_assert_ldouble_nan(log(x));
}
END_TEST

TCase *s21_tc_log(void) {
  TCase *tc_log = tcase_create("s21_log");

  tcase_add_test(tc_log, s21_log_test_1);
  tcase_add_test(tc_log, s21_log_test_2);
  tcase_add_test(tc_log, s21_log_test_3);
  tcase_add_test(tc_log, s21_log_test_4);
  tcase_add_test(tc_log, s21_log_test_5);
  tcase_add_test(tc_log, s21_log_test_6);
  tcase_add_test(tc_log, s21_log_test_7);
  tcase_add_test(tc_log, s21_log_test_8);
  tcase_add_test(tc_log, s21_log_test_9);
  tcase_add_test(tc_log, s21_log_test_10);
  tcase_add_test(tc_log, s21_log_test_11);

  return tc_log;
}
