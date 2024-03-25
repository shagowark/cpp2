#ifndef OIL_WELL_H
#define OIL_WELL_H

#include "well.h"

class OilWell : public Well {
public:
    OilWell();
    OilWell(int vol, bool working);
    std::string toString() override;
    ~OilWell() override = default;
};

#endif