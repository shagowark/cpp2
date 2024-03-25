#include "gas_well.h"


GasWell::GasWell() : Well() {
}

GasWell::GasWell(int vol, bool working) : Well(vol, working) {
}

std::string GasWell::toString() {
    std::string status = isWorking ? "working" : "not working";
    return "Gas well (status: " + status + ", volume: " + std::to_string(volume) + ")";
}