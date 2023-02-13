#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_sqrt_test1) {
  ck_assert_double_nan(s21_sqrt(-0.01));
}
END_TEST
/*
START_TEST(s21_sqrt_test2) {
  ck_assert_double_eq(s21_sqrt(INFINITY), sqrt(INFINITY));
}
END_TEST
*/
START_TEST(s21_sqrt_test3) {
  ck_assert_double_nan(s21_sqrt(NAN));
}
END_TEST

START_TEST(s21_sqrt_test4) {
  ck_assert_double_nan(s21_sqrt(-INFINITY));
}
END_TEST

START_TEST(s21_sqrt_test5) {
  ck_assert_double_nan(s21_sqrt(-231.41));
}
END_TEST
/*
START_TEST(s21_sqrt_test6) {
  long double arr[] = {5898.467, 8427.928,  5698.0035, 1289.244, 7025.7,
                       12.1357,  4745.5,    2930.637,  8187.391, 1015.89,
                       3155.844, 3954.143,  2862.1,    2782.954, 5097.545,
                       2630.4,   1075.747,  1889.786,  1782,     0.0001,
                       21345678, 7432,      0.3245,    12345,    13456,
                       0.03213,  324.42342, 0,         50,       0.24};
  for (int i = 0; i < 30; i++) {
    ck_assert_double_eq_tol(s21_sqrt(arr[i]), sqrt(arr[i]), 0.000001);
  }
}
*/
TCase *s21_tc_sqrt(void) {
  TCase *tc_sqrt = tcase_create("s21_sqrt");

  tcase_add_test(tc_sqrt, s21_sqrt_test1);
//  tcase_add_test(tc_sqrt, s21_sqrt_test2);
  tcase_add_test(tc_sqrt, s21_sqrt_test3);
  tcase_add_test(tc_sqrt, s21_sqrt_test4);
  tcase_add_test(tc_sqrt, s21_sqrt_test5);
//  tcase_add_test(tc_sqrt, s21_sqrt_test6);
  
  return tc_sqrt;
}
