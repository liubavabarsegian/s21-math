#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(exp_test_1) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.000001);
}
END_TEST

START_TEST(exp_test_2) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.000001);
}
END_TEST

START_TEST(exp_test_3) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.000001);
}
END_TEST

START_TEST(exp_test_4) {
    double x = 999999999999;
    ck_assert_ldouble_infinite(s21_exp(x));
}
END_TEST

START_TEST(exp_test_5) {
    double x = -999999999999;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), 0.000001);
}
END_TEST

START_TEST(exp_test_6) {
    double x = DBL_MAX;
    ck_assert_ldouble_infinite(s21_exp(x));
}
END_TEST

START_TEST(exp_test_7) {
    double x = -DBL_MAX;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

START_TEST(exp_test_8) {
    double x = 1e-9;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

START_TEST(exp_test_9) {
    double x = -1e-9;
    ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), S21_EPS);
}
END_TEST

START_TEST(exp_test_10) {
    ck_assert_ldouble_nan(s21_exp(NAN));
    ck_assert_ldouble_nan(exp(NAN));
}
END_TEST

START_TEST(exp_test_11) {
    ck_assert_ldouble_infinite(s21_exp(INFINITY));
    ck_assert_ldouble_infinite(exp(INFINITY));
}
END_TEST

START_TEST(exp_test_12) {
    ck_assert_ldouble_eq_tol(s21_exp(-INFINITY), exp(-INFINITY), S21_EPS);
}
END_TEST
// end of exp test
// factorial tests
/*
START_TEST(s21_factorial_positive) {
  //long long int a = 1 * pow(10, 18);
  long double a = 16;
  //ck_assert_ldouble_eq_tol(s21_factorial(a), tgammal(a + 1), 0.000001); //
  //need to switch to ck_assert_ldouble_eq_tol

  ck_assert_ldouble_eq_tol(s21_factorial(a), tgammal(a + 1), 0.000001); // need
  //to switch to ck_assert_ldouble_eq_tol

} END_TEST

START_TEST(s21_factorial_negative) {
  // long long int a = -1 * pow(10, 0);
  long double a = -1 * pow(10, 0);
  ck_assert_ldouble_eq(s21_factorial(a), tgammal(a + 1));  // need to switch to ck_assert_ldouble_eq_tol
}
END_TEST

START_TEST(s21_factorial_null) {
  // long long int a = 0 * pow(10, 0);
  long double a = 0 * pow(10, 0);
  ck_assert_ldouble_eq(
      s21_factorial(a),
      tgammal(a + 1));  // need to switch to ck_assert_ldouble_eq_tol
}
END_TEST

START_TEST(s21_factorial_one) {
  // long long int a = 1 * pow(10,0);
  long double a = 1 * pow(10, 0);
  ck_assert_ldouble_eq(
      s21_factorial(a),
      tgammal(a + 1));  // need to switch to ck_assert_ldouble_eq_tol
}
END_TEST
// end of factorial tests
*/
TCase *s21_tc_exp(void) {
  TCase *tc_exp = tcase_create("s21_exp");

  tcase_add_test(tc_exp, exp_test_1);
  tcase_add_test(tc_exp, exp_test_2);
  tcase_add_test(tc_exp, exp_test_3);
  tcase_add_test(tc_exp, exp_test_4);
  tcase_add_test(tc_exp, exp_test_5);
  
  tcase_add_test(tc_exp, exp_test_6);
  tcase_add_test(tc_exp, exp_test_7);
  tcase_add_test(tc_exp, exp_test_8);
  tcase_add_test(tc_exp, exp_test_9);
  tcase_add_test(tc_exp, exp_test_10);
  tcase_add_test(tc_exp, exp_test_11);
  tcase_add_test(tc_exp, exp_test_12);
  
  // end of exp
  // factorial
  //tcase_add_test(tc_exp, s21_factorial_positive);
  //tcase_add_test(tc_exp, s21_factorial_negative);
  //tcase_add_test(tc_exp, s21_factorial_null);
  //tcase_add_test(tc_exp, s21_factorial_one);

  return tc_exp;
}
