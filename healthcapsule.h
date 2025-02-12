#ifndef HEALTHCAPSULE_H
#define HEALTHCAPSULE_H

#include "location.h"

class Healthcapsule : public Location {
private:
    bool taken;

public:
    Healthcapsule();

    bool getTaken() const;

    void setTaken(bool t);

    void draw() const override;
    int visit(Player& p) override;
};

#endif 
