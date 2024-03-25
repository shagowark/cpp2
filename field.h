#ifndef FIELD_H
#define FIELD_H

#include <vector>
#include "string"
#include "well.h"
#include "oil_well.h"
#include "gas_well.h"
#include "water_well.h"

class Field {
private:
    int gasVolume = 0;
    int oilVolume = 0;
    int waterVolume = 0;
    std::vector<Well*> wells = {};

public:
    Field() = default;
    Field(int gasVol, int oilVol, int waterVol, std::vector<Well*>  w);

    int getGasVolume() const;
    int getOilVolume() const;
    int getWaterVolume() const;
    const std::vector<Well*>& getWells() const;
    void setGasVolume(int newGasVolume);
    void setOilVolume(int newOilVolume);
    void setWaterVolume(int newWaterVolume);
    void setWells(std::vector<Well*> newWells);
    void turnWellOnOff(int number);
    void simulateWork();
    void addOilWell();
    void addGasWell();
    void addWaterWell();
    void editWell(int n, bool status, int volume);
    void deleteWell(int n);
    std::string toString();

    ~Field() = default;
};

#endif
