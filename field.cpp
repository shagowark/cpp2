#include "field.h"

#include <utility>
#include <sstream>


Field::Field(int gasVol, int oilVol, int waterVol, std::vector<Well*>  w){
    this->gasVolume = gasVol;
    this->oilVolume = oilVol;
    this->waterVolume = waterVol;
    this->wells = std::move(w);
}

int Field::getGasVolume() const {
    return gasVolume;
}

int Field::getOilVolume() const {
    return oilVolume;
}

int Field::getWaterVolume() const {
    return waterVolume;
}

const std::vector<Well*>& Field::getWells() const {
    return wells;
}

void Field::setGasVolume(int newGasVolume) {
    this->gasVolume = newGasVolume;
}

void Field::setOilVolume(int newOilVolume) {
    this->oilVolume = newOilVolume;
}

void Field::setWaterVolume(int newWaterVolume) {
    this->waterVolume = newWaterVolume;
}

void Field::setWells(std::vector<Well*> newWells) {
    this->wells = std::move(newWells);
}

void Field::turnWellOnOff(int number) {
    this->wells[number]->turnOnOff();
}

void Field::simulateWork() {
    for (auto & well : wells){
        int res = well->simulateWork();
        if (typeid(*well) == typeid(OilWell)){
            oilVolume += res;
        } else if (typeid(*well) == typeid(GasWell)){
            gasVolume += res;
        } else {
            waterVolume += res;
        }
    }
}

std::string Field::toString() {
    std::stringstream ss;
    ss << "Field:\n";
    ss << "Gas volume: " << gasVolume << "\n";
    ss << "Oil volume: " << oilVolume << "\n";
    ss << "Water volume: " << waterVolume << "\n";
    ss << "Wells:\n";
    for (size_t i = 0; i < wells.size(); ++i) {
        ss << "Well " << i + 1 << ": " << wells[i]->toString() << "\n";
    }
    return ss.str();
}

void Field::addOilWell() {
    wells.push_back(new OilWell());
}

void Field::addGasWell() {
    wells.push_back(new GasWell());
}

void Field::addWaterWell() {
    wells.push_back(new WaterWell());
}

void Field::deleteWell(int n) {
    delete wells[n];
    wells.erase(wells.begin() + n);
}

void Field::editWell(int n, bool status, int volume) {
    wells[n]->setVolume(volume);
    wells[n]->setStatus(status);
}
