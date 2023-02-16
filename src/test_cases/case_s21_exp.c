#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_exp_test_1) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), TEST_EPS);
}
END_TEST

START_TEST(s21_exp_test_2) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), TEST_EPS);
}
END_TEST

START_TEST(s21_exp_test_3) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), TEST_EPS);
}
END_TEST

START_TEST(s21_exp_test_4) {
    double x = 999999999999;
    ck_assert_ldouble_infinite(s21_exp(x));
    ck_assert_ldouble_infinite(exp(x));
}
END_TEST

START_TEST(s21_exp_test_5) {
    double x = -999999999999;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), TEST_EPS);
}
END_TEST

START_TEST(s21_exp_test_6) {
    double x = DBL_MAX;
    ck_assert_ldouble_infinite(s21_exp(x));
    ck_assert_ldouble_infinite(exp(x));
}
END_TEST

START_TEST(s21_exp_test_7) {
    double x = -DBL_MAX;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), TEST_EPS);
}
END_TEST

START_TEST(s21_exp_test_8) {
    double x = 1e-9;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), TEST_EPS);
}
END_TEST

START_TEST(s21_exp_test_9) {
    double x = -1e-9;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), TEST_EPS);
}
END_TEST

START_TEST(s21_exp_test_10) {
    double x = NAN;
    ck_assert_ldouble_nan(s21_exp(x));
    ck_assert_ldouble_nan(exp(x));
}
END_TEST

START_TEST(s21_exp_test_11) {
    double x = -NAN;
    ck_assert_ldouble_nan(s21_exp(x));
    ck_assert_ldouble_nan(exp(x));
}
END_TEST

START_TEST(s21_exp_test_12) {
    double x = INFINITY;
    ck_assert_ldouble_infinite(s21_exp(x));
    ck_assert_ldouble_infinite(exp(x));
}
END_TEST

START_TEST(s21_exp_test_13) {
    double x = -INFINITY;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), TEST_EPS);
}
END_TEST

TCase *s21_tc_exp(void) {
  TCase *tc_exp = tcase_create("s21_exp");

  tcase_add_test(tc_exp, s21_exp_test_1);
  tcase_add_test(tc_exp, s21_exp_test_2);
  tcase_add_test(tc_exp, s21_exp_test_3);
  tcase_add_test(tc_exp, s21_exp_test_4);
  tcase_add_test(tc_exp, s21_exp_test_5);
  tcase_add_test(tc_exp, s21_exp_test_6);
  tcase_add_test(tc_exp, s21_exp_test_7);
  tcase_add_test(tc_exp, s21_exp_test_8);
  tcase_add_test(tc_exp, s21_exp_test_9);
  tcase_add_test(tc_exp, s21_exp_test_10);
  tcase_add_test(tc_exp, s21_exp_test_11);
  tcase_add_test(tc_exp, s21_exp_test_12);
  tcase_add_test(tc_exp, s21_exp_test_13);
  
  return tc_exp;
}
