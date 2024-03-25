#include "oil_well.h"

OilWell::OilWell() : Well() {
}

OilWell::OilWell(int vol, bool working) : Well(vol, working) {
}

std::string OilWell::toString() {
    std::string status = isWorking ? "working" : "not working";
    return "Oil well (status: " + status + ", volume: " + std::to_string(volume) + ")";
}
