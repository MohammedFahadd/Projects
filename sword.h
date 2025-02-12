#ifndef SWORD_H
#define SWORD_H

#include "location.h"

class Sword : public Location {
private:
    bool taken;

public:
    Sword();

    bool getTaken() const;

    void setTaken(bool t);

    void draw() const override;
    int visit(Player& p) override;
};

#endif 
