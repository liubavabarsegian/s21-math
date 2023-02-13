#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_log_test1) {
  ck_assert_double_eq_tol(s21_log(26941.289), log(26941.289), 0.000001);
}
END_TEST

START_TEST(s21_log_test2) {
  ck_assert_double_nan(s21_log(-12.36));
}
END_TEST

START_TEST(s21_log_test3) {
  ck_assert_double_eq(s21_log(INFINITY), log(INFINITY));
}
END_TEST

START_TEST(s21_log_test4) {
  ck_assert_double_nan(s21_log(NAN));
}
END_TEST

START_TEST(s21_log_test5) {
  ck_assert_double_nan(s21_log(-INFINITY));
}
END_TEST

START_TEST(s21_log_test6) {
  ck_assert_double_eq(s21_log(0), log(0));
}
END_TEST

START_TEST(s21_log_test7) {
  ck_assert_double_eq(s21_log(1), log(1));
}
END_TEST

TCase *s21_tc_log(void) {
  TCase *tc_log = tcase_create("s21_log");

  tcase_add_test(tc_log, s21_log_test1);
  tcase_add_test(tc_log, s21_log_test2);
  tcase_add_test(tc_log, s21_log_test3);
  tcase_add_test(tc_log, s21_log_test4);
  tcase_add_test(tc_log, s21_log_test5);
  tcase_add_test(tc_log, s21_log_test6);
  tcase_add_test(tc_log, s21_log_test7);
  
  return tc_log;
}
