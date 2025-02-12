#include "shield.h"
#include <iostream>

Shield::Shield() : Location('#') {
    taken = false;
}

bool Shield::getTaken() const {
    return taken;
}

void Shield::setTaken(bool t) {
    taken = t;
}

void Shield::draw() const {
    if (visited && !taken) {
        cout << symbol;
    } else if (taken) {
        cout << " ";
    } else {
        cout << ".";
    }
}

int Shield::visit(Player& p) {
    if (!visited) {
        visited = true;
        cout << "You found a metal shield." << endl;
    }
    return 1;
}
