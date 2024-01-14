//#include <QCoreApplication>

#include <iostream>
#include "set/set.h"
#include "tests/test_set.h"


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
