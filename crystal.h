#ifndef CRYSTAL_H
#define CRYSTAL_H

#include "location.h"

class Crystal : public Location {
private:
    bool taken;

public:
    Crystal();

    bool getTaken() const;

    void setTaken(bool t);

    void draw() const override;
    int visit(Player& p) override;
};

#endif 
