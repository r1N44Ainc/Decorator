#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include "beverage.h"

class HouseBlend : public Beverage {
public:
    HouseBlend();
    virtual double cost();
};

#endif // HOUSEBLEND_H
