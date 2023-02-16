CMPLR = gcc -std=c11 -Wall -Werror -Wextra
TEST_FLAGS = -lcheck -lm -lsubunit
GCOV_FLAGS = -ftest-coverage -fprofile-arcs

all : s21_math.a

s21_math.a :
	$(CMPLR) -c s21*.c
	ar rc s21_math.a *.o
	ranlib s21_math.a

test : tcase s21_math.a
	$(CMPLR) -c test.c
	$(CMPLR) *.o s21_math.a $(TEST_FLAGS) -o test

gcov_report : tcase
	$(CMPLR) $(GCOV_FLAGS) -c *.c
	$(CMPLR) $(GCOV_FLAGS) *.o $(TEST_FLAGS) -o test
	./test
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

tcase :
	$(CMPLR) -c ./test_cases/*.c

check_style:
#cp ../materials/linters/.clang-format ../src
	clang-format -n -style=google *.c *.h test_cases/*.c

correct_style:
#cp ../materials/linters/.clang-format ../src
	clang-format -i -style=google *.c *.h test_cases/*.c

clean :
	rm -rf *.o *.a test *.gcno *.gcda *.info report

rebuild : clean all

.PHONY: all clean s21_math.a test gcov_report tcase check_style rebuild 
