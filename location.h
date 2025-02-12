#ifndef LOCATION_H
#define LOCATION_H

#include "player.h"
#include <iostream>

class Location {
protected:
    bool visited;
    char symbol;

public:
    Location(char s = ' ');

    char getSymbol() const;
    bool getVisited() const;

    void setSymbol(char s);
    void setVisited(bool v);

    virtual void draw() const;
    virtual int visit(Player& p);
};

#endif 
