#ifndef WELL_H
#define WELL_H
#include "string"

class Well {
protected:
    int volume = 0;
    bool isWorking = false;
    const int VOLUME_PER_TICK = 10;

public:
    Well() = default;
    Well(int vol, bool working);
    virtual bool isWorkingNow();
    virtual int simulateWork();
    virtual int getVolume();
    virtual int getTick();
    virtual void setVolume(int newVolume);
    virtual void setStatus(bool status);
    virtual void turnOnOff();
    virtual std::string toString();
    Well& operator=(const Well& other);
    virtual ~Well() = default;
};

#endif
