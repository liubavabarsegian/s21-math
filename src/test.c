#include "test_s21_math.h"

//#include <stdio.h>

int main(void){
  int failed = 0;
  Suite *s_s21_math = suite_create("s21_math.h");
  // abs
  suite_add_tcase(s_s21_math, s21_tc_abs());
  // exp
  suite_add_tcase(s_s21_math, s21_tc_exp());
  // fabs
  suite_add_tcase(s_s21_math, s21_tc_fabs());
  // acos
  //suite_add_tcase(s_s21_math, *s21_tc_acos());
  //suite_add_tcase(s_s21_math, *s21_tc_asin());
  //suite_add_tcase(s_s21_math, *s21_tc_atan());
  //suite_add_tcase(s_s21_math, *s21_tc_ceil());
  //suite_add_tcase(s_s21_math, *s21_tc_cos());
  //suite_add_tcase(s_s21_math, *s21_tc_floor());
  //suite_add_tcase(s_s21_math, *s21_tc_fmod());
  //suite_add_tcase(s_s21_math, *s21_tc_log());
  //suite_add_tcase(s_s21_math, *s21_tc_pow());
  //suite_add_tcase(s_s21_math, *s21_tc_sin());
  //suite_add_tcase(s_s21_math, *s21_tc_sqrt());
  //suite_add_tcase(s_s21_math, *s21_tc_tan());

  SRunner *runner = srunner_create(s_s21_math);

  srunner_run_all(runner, CK_NORMAL);
  failed = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (failed == 0) ? 0 : 1;
}
