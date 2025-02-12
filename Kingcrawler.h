#ifndef KINGCRAWLER_H
#define KINGCRAWLER_H

#include "location.h"

class Kingcrawler : public Location {
private:
    bool taken;

public:
    Kingcrawler();

    bool getTaken() const;

    void setTaken(bool t);

    void draw() const override;
    int visit(Player& p) override;
};

#endif 
