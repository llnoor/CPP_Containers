CC = g++
FLAGS = -Wall -Werror -Wextra -std=c++17
LIBS = -lgtest

PROJECT = s21_containers
TARGET = $(PROJECT).a
SOURCES = $(wildcard $(PROJECT)/*.cc) $(wildcard $(PROJECT)/*.tpp)
OBJECTS = $(patsubst %.cc, %.o, $(SOURCES))

TESTDIR = unit_tests
TESTEXE = $(TESTDIR)/$(TESTDIR).out
TESTSRC = $(wildcard $(TESTDIR)/*.cc)
TESTOBJ = $(patsubst %.cc, %.o, $(TESTSRC))

mantest:
#	$(CC) $(FLAGS) $(SOURCES) manual_test.cc
	$(CC) $(FLAGS) manual_test.cc
#	$(CC) $(FLAGS) -fsanitize=address manual_test.cc
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
	rm -rf *.out *.a $(TESTEXE) #$(TESTCOV) $(TESTREP)