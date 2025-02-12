#ifndef POWERMAX_H
#define POWERMAX_H

#include "location.h"

class powermax : public Location {
private:
    bool taken;

public:
    powermax();

    bool getTaken() const;

    void setTaken(bool t);

    void draw() const override;
    int visit(Player& p) override;
};

#endif 
