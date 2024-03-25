#include "water_well.h"


WaterWell::WaterWell() : Well() {
}

WaterWell::WaterWell(int vol, bool working) : Well(vol, working) {
}

std::string WaterWell::toString() {
    std::string status = isWorking ? "working" : "not working";
    return "Water well (status: " + status + ", volume: " + std::to_string(volume) + ")";
}
