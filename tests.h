#ifndef TESTS_H
#define TESTS_H

#include "field.h"

class Tests {
private:
    Field* field;
    void testAdd();
    void testDelete();
    void testWork();
public:
    void test();
};

#endif