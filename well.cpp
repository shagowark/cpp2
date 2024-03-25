#include "well.h"

Well::Well(int vol, bool working) : volume(vol), isWorking(working) {
}

bool Well::isWorkingNow() {
    return isWorking;
}

int Well::simulateWork() {
    if (isWorking){
        this->volume += VOLUME_PER_TICK;
        return VOLUME_PER_TICK;
    }
    return 0;
}

int Well::getVolume() {
    return volume;
}

void Well::setVolume(int newVolume) {
    this->volume = newVolume;
}

void Well::setStatus(bool status) {
    this->isWorking = status;
}

void Well::turnOnOff() {
    this->isWorking = !this->isWorking;
}

std::string Well::toString() {
    std::string status = isWorking ? "working" : "not working";
    return "Well (status: " + status + ", volume: " + std::to_string(volume) + ")";
}

Well &Well::operator=(const Well &other) {
    if (this != &other) {
        volume = other.volume;
        isWorking = other.isWorking;
    }
    return *this;
}

int Well::getTick() {
    return VOLUME_PER_TICK;
}



