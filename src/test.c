#include <math.h>
#include <stdlib.h>
#include "s21_math.h"

// abs
START_TEST(s21_abs_positive) {
  int a = 1;
  ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

START_TEST(s21_abs_negative) {
  int a = -1;
  ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST

START_TEST(s21_abs_null) {
  int a = 0;
  ck_assert_int_eq(s21_abs(a), abs(a));
} END_TEST
// fabs
START_TEST(s21_fabs_positive) {
  double a = 1;
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
} END_TEST

START_TEST(s21_fabs_negative) {
  double a = -1;
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
} END_TEST

START_TEST(s21_fabs_null) {
  double a = 0;
  ck_assert_ldouble_eq(s21_fabs(a), fabs(a));
} END_TEST

int main(void){
  int failed = 0;
  Suite *s_s21_math = suite_create("s21_math.h");
  // abs
  TCase *tc_abs = tcase_create("s21_abs");
  suite_add_tcase(s_s21_math, tc_abs);
  // fabs
  TCase *tc_fabs = tcase_create("s21_fabs");
  suite_add_tcase(s_s21_math, tc_fabs);
// put test cases for other functions here

  SRunner *runner = srunner_create(s_s21_math);
  // abs
  tcase_add_test(tc_abs, s21_abs_positive);
  tcase_add_test(tc_abs, s21_abs_negative);
  tcase_add_test(tc_abs, s21_abs_null);
  // fabs
  tcase_add_test(tc_fabs, s21_fabs_positive);
  tcase_add_test(tc_fabs, s21_fabs_negative);
  tcase_add_test(tc_fabs, s21_fabs_null);
// put other test adding here

  srunner_run_all(runner, CK_NORMAL);
  failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (failed == 0) ? 0 : 1;
}

//Suite *s21_abs_suite(void);

/*
Suite *s21_abs_suite(void){
  Suite *s;
  TCase *tc_pos, *tc_neg, *tc_nul;

  s = suite_create("s21_abs");
  tc_pos = tcase_create("Positive");
  tcase_add_test(tc_pos, positive);
  suite_add_tcase(s, tc_pos);

//  tc_neg = tcase_create("negative");
//  tcase_add_test(tc_neg, negative);
//  suite_add_tcase(s, tc_neg);
//
//  tc_nul = tcase_create("null");
//  tcase_add_test(tc_nul, null);
//  suite_add_tcase(s, tc_nul);

  return s;
}*/
