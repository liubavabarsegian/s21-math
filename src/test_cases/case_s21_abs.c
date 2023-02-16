#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_abs_test_1) {
  int x = (int)INFINITY;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(s21_abs_test_2) {
  int x = (int)(-INFINITY);
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(s21_abs_test_3) {
  int x = 0;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(s21_abs_test_4) {
  int x = INT_MAX;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(s21_abs_test_5) {
  int x = INT_MIN;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(s21_abs_test_6) {
  int x = (int)NAN;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

TCase *s21_tc_abs(void) {
  TCase *tc_abs = tcase_create("s21_abs");

  tcase_add_test(tc_abs, s21_abs_test_1);
  tcase_add_test(tc_abs, s21_abs_test_2);
  tcase_add_test(tc_abs, s21_abs_test_3);
  tcase_add_test(tc_abs, s21_abs_test_4);
  tcase_add_test(tc_abs, s21_abs_test_5);
  tcase_add_test(tc_abs, s21_abs_test_6);

  return tc_abs;
}
