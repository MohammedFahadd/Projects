#ifndef PRINCESS_H
#define PRINCESS_H

#include "location.h"

class Princess : public Location {
private:
    bool taken;

public:
    Princess();

    bool getTaken() const;

    void setTaken(bool t);

    void draw() const override;
    int visit(Player& p) override;
};

#endif 
