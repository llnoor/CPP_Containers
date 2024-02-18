CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++17
LIBS = -lgtest
OS=$(shell uname -s)

PROJECT = s21_containers
TARGET = $(PROJECT).a
ifeq ($(OS), Linux)
	SOURCES = $(wildcard $(PROJECT)/*.cc)
else
	SOURCES = $(wildcard $(PROJECT)/*.cc) $(wildcard $(PROJECT)/*.tpp)
endif
OBJECTS = $(patsubst %.cc, %.o, $(SOURCES))

# MANTEST = manual_test.cc
# MANTEST = manual_test_erase.cc
# MANTEST = manual_test_insert.cc
# MANTEST = manual_test_splice.cc
# MANTEST = manual_test_merge.cc
# MANTEST = manual_test_swap.cc
MANTEST = manual_test_leaks.cc
MANLEAK = manual_test_leaks.cc
MTSTEXE = a.out

TESTDIR = unit_tests
TESTEXE = $(TESTDIR)/$(TESTDIR).out
TESTSRC = $(wildcard $(TESTDIR)/*.cc)
TESTOBJ = $(patsubst %.cc, %.o, $(TESTSRC))
TESTCOV = gcov_test
TESTREP = report

VGFLAGS=--trace-children=yes --track-fds=yes --track-origins=yes --leak-check=full --show-leak-kinds=all

# ---------------------------------------------------------------------------------------------------- #

mantest:
#	$(CC) $(FLAGS) $(SOURCES) $(MANTEST)
#	$(CC) $(FLAGS) -g $(MANTEST)
	$(CC) $(FLAGS) $(MANTEST)
#	$(CC) $(FLAGS) -fsanitize=address $(MANTEST)
	./$(MTSTEXE)

$(TARGET): clean $(OBJECTS)
# seeems like this is not necessary with tpp files only:
#	$(CC) -c $(FLAGS) $(SOURCES)
	ar rcs $(TARGET) $(OBJECTS)

test: clean $(TARGET)
	$(CC) $(FLAGS) $(TESTSRC) $(SOURCES) -o $(TESTEXE) $(LIBS) -lgcov
	./$(TESTEXE)

memtest: test
ifeq ($(OS), Linux)
	CK_FORK=no valgrind $(VGFLAGS) ./$(TESTEXE)
else
	CK_FORK=no leaks --atExit -- ./$(TESTEXE)
endif

mantest_leaks:
	$(CC) $(FLAGS) $(MANLEAK)
ifeq ($(OS), Linux)
	CK_FORK=no valgrind $(VGFLAGS) ./$(MTSTEXE)
else
	CK_FORK=no leaks --atExit -- ./$(MTSTEXE)
endif

style:
	cp ../materials/linters/.clang-format .
	clang-format -n $(PROJECT)/*.* $(TESTDIR)/*.* *.cc *.h
	rm -rf .clang-format

gcov_report: test
	$(CC) $(FLAGS) --coverage $(TESTSRC) $(SOURCES) $(TARGET) $(LIBS) -o $(TESTCOV)
	chmod +x *
	./$(TESTCOV)
	lcov -t "gcov_test" -o $(TESTCOV).info --no-external -c -d .
	genhtml -o $(TESTREP) $(TESTCOV).info
	open ./$(TESTREP)/index.html
	make clean_coverage_objects

clean: clean_objects clean_other clean_coverage_objects

clean_objects:
	rm -rf *.o $(PROJECT)/*.o $(TESTDIR)/*.o

clean_other:
	rm -rf *.out *.a *.dSYM $(TESTEXE) $(TESTCOV) $(TESTREP)

clean_coverage_objects:
	rm -rf *.gcno *.gcda *.info

#ubuntu
install_gtest:
	sudo apt install libgtest-dev cmake -y
	cd /usr/src/gtest && sudo cmake CMakeLists.txt && sudo make
	cd lib && sudo cp *.a /usr/lib