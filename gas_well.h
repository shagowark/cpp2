#ifndef GAS_WELL_H
#define GAS_WELL_H

#include "well.h"

class GasWell : public Well {
public:
    GasWell();
    GasWell(int vol, bool working);
    std::string toString() override;
    ~GasWell() override = default;

};

#endif