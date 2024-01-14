CC = gcc -std=c++17 -g -Wall -Werror -Wextra
OS = $(shell uname)

SET = tests/test_set.cc

ifeq ($(OS), Linux)
CHECKFLAGS = -lgtest -lgtest_main -lrt -lm -lstdc++ -pthread 
else
CHECKFLAGS = -lgtest -lgtest_main -lm -lpthread  -lstdc++
endif

all: test clean

test_set:
	$(CC) $(FLAGS) $(SET) -o test_set $(CHECKFLAGS)
	./test_set

test: build_test
	./test

valgrind: test
	CK_FORK=no valgrind --vgdb=no --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./test

clean:
	rm -rf report \
	lib_matrix_oop.a \
	report.info \
	*.gcda \
	*.gcno \
	matrix_oop.o \
	test.dSYM \
	test \
	test_*