#ifndef SHIELD_H
#define SHIELD_H

#include "location.h"

class Shield : public Location {
private:
    bool taken;

public:
    Shield();

    bool getTaken() const;

    void setTaken(bool t);

    void draw() const override;
    int visit(Player& p) override;
};

#endif 
