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
MANTEST = manual_test_insert.cc 
#MANTEST = manual_test_splice.cc 

TESTDIR = unit_tests
TESTEXE = $(TESTDIR)/$(TESTDIR).out
TESTSRC = $(wildcard $(TESTDIR)/*.cc)
TESTOBJ = $(patsubst %.cc, %.o, $(TESTSRC))

mantest:
#	$(CC) $(FLAGS) $(SOURCES) $(MANTEST)
	$(CC) $(FLAGS) -g $(MANTEST)
#	$(CC) $(FLAGS) -fsanitize=address $(MANTEST)
	./a.out

$(TARGET): clean $(OBJECTS)
# seeems like this is not necessary with tpp files only:
#	$(CC) -c $(FLAGS) $(SOURCES)
	ar rcs $(TARGET) $(OBJECTS)

test: clean $(TARGET)
	$(CC) $(FLAGS) $(TESTSRC) $(SOURCES) -o $(TESTEXE) $(LIBS) -lgcov
	./$(TESTEXE)

clean: clean_objects clean_other #clean_coverage_objects

clean_objects:
	rm -rf *.o $(PROJECT)/*.o $(TESTDIR)/*.o

clean_other:
	rm -rf *.out *.a *.dSYM $(TESTEXE) #$(TESTCOV) $(TESTREP)