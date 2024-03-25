#include "tests.h"
#include <cassert>


void Tests::testAdd() {
    field = new Field();

    field->addWaterWell();
    assert(field->getWells().size() == 1);
}

void Tests::testDelete() {
    field = new Field();

    field->addWaterWell();
    field->deleteWell(0);
    assert(field->getWells().empty());
}

void Tests::testWork() {
    field = new Field();

    field->addWaterWell();
    field->turnWellOnOff(0);
    field->simulateWork();
    assert(field->getWaterVolume() == field->getWells()[0]->getTick());
}

void Tests::test() {
    testAdd();
    testDelete();
    testWork();
}
