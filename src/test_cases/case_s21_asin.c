#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_asin_test_1) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_asin_test_2) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_asin_test_3) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_asin_test_4) {
  double x = 50;
  ck_assert_ldouble_nan(s21_asin(x));
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(s21_asin_test_5) {
  double x = -50;
  ck_assert_ldouble_nan(s21_asin(x));
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(s21_asin_test_6) {
  double x = -0.8;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_asin_test_7) {
  double x = 0.6;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), TEST_EPS);
}
END_TEST

START_TEST(s21_asin_test_8) {
  double x = INFINITY;
  ck_assert_ldouble_nan(s21_asin(x));
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(s21_asin_test_9) {
  double x = -INFINITY;
  ck_assert_ldouble_nan(s21_asin(x));
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(s21_asin_test_10) {
  double x = NAN;
  ck_assert_ldouble_nan(s21_asin(x));
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

START_TEST(s21_asin_test_11) {
  double x = -NAN;
  ck_assert_ldouble_nan(s21_asin(x));
  ck_assert_ldouble_nan(asin(x));
}
END_TEST

TCase *s21_tc_asin(void) {
  TCase *tc_asin = tcase_create("s21_asin");

  tcase_add_test(tc_asin, s21_asin_test_1);
  tcase_add_test(tc_asin, s21_asin_test_2);
  tcase_add_test(tc_asin, s21_asin_test_3);
  tcase_add_test(tc_asin, s21_asin_test_4);
  tcase_add_test(tc_asin, s21_asin_test_5);
  tcase_add_test(tc_asin, s21_asin_test_6);
  tcase_add_test(tc_asin, s21_asin_test_7);
  tcase_add_test(tc_asin, s21_asin_test_8);
  tcase_add_test(tc_asin, s21_asin_test_9);
  tcase_add_test(tc_asin, s21_asin_test_10);
  tcase_add_test(tc_asin, s21_asin_test_11);

  return tc_asin;
}
