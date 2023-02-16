#include "../s21_math.h"
#include "../test_s21_math.h"

START_TEST(s21_sqrt_test_1) {
  double x = -0.01;
  ck_assert_ldouble_nan(s21_sqrt(x));
  ck_assert_ldouble_nan(sqrt(x));
}
END_TEST

START_TEST(s21_sqrt_test_2) {
  double x = INFINITY;
  ck_assert_ldouble_infinite(s21_sqrt(x));
  ck_assert_ldouble_infinite(sqrt(x));
}
END_TEST

START_TEST(s21_sqrt_test_3) {
  double x = NAN;
  ck_assert_ldouble_nan(s21_sqrt(x));
  ck_assert_ldouble_nan(sqrt(x));
}
END_TEST

START_TEST(s21_sqrt_test_4) {
  double x = -INFINITY;
  ck_assert_ldouble_nan(s21_sqrt(x));
  ck_assert_ldouble_nan(sqrt(x));
}
END_TEST

START_TEST(s21_sqrt_test_5) {
  double x = -231.41;
  ck_assert_ldouble_nan(s21_sqrt(x));
  ck_assert_ldouble_nan(sqrt(x));
}
END_TEST

START_TEST(s21_sqrt_test_6) {
  long double arr[] = {5898.467, 8427.928,  5698.0035, 1289.244, 7025.7,
                       12.1357,  4745.5,    2930.637,  8187.391, 1015.89,
                       3155.844, 3954.143,  2862.1,    2782.954, 5097.545,
                       2630.4,   1075.747,  1889.786,  1782,     0.0001,
                       21345678, 7432,      0.3245,    12345,    13456,
                       0.03213,  324.42342, 0,         50,       0.24};
  for (int i = 0; i < 30; i++) {
    ck_assert_ldouble_eq_tol(s21_sqrt(arr[i]), sqrt(arr[i]), TEST_EPS);
  }
}

TCase *s21_tc_sqrt(void) {
  TCase *tc_sqrt = tcase_create("s21_sqrt");

  tcase_add_test(tc_sqrt, s21_sqrt_test_1);
  tcase_add_test(tc_sqrt, s21_sqrt_test_2);
  tcase_add_test(tc_sqrt, s21_sqrt_test_3);
  tcase_add_test(tc_sqrt, s21_sqrt_test_4);
  tcase_add_test(tc_sqrt, s21_sqrt_test_5);
  tcase_add_test(tc_sqrt, s21_sqrt_test_6);
  
  return tc_sqrt;
}
