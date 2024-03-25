#ifndef CONSOLE_INTERFACE_H
#define CONSOLE_INTERFACE_H

#include "field.h"

class ConsoleInterface {

private:
    Field field;
    void printField();
    void printOptions();
    void getInputOption();
    void setGasVolume();
    void setOilVolume();
    void setWaterVolume();
    void addOilWell();
    void addGasWell();
    void addWaterWell();
    void deleteWell();
    void editWell();
    void turnOnOffWell();
    void simulateWork();

public:
    ConsoleInterface() = default;
    void start();
    ~ConsoleInterface() = default;
};

#endif
