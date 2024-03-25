#ifndef WATER_WELL_H
#define WATER_WELL_H

#include "well.h"

class WaterWell : public Well {
public:
    WaterWell();
    WaterWell(int vol, bool working);
    std::string toString() override;
    ~WaterWell() override = default;
};

#endif
