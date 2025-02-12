#ifndef NIGHTCRAWLER_H
#define NIGHTCRAWLER_H

#include "location.h"

class Nightcrawler : public Location {
private:
    bool taken;

public:
    Nightcrawler();

    bool getTaken() const;

    void setTaken(bool t);

    void draw() const override;
    int visit(Player& p) override;
};

#endif 
