#include "crystal.h"
#include <iostream>

Crystal::Crystal() : Location('C') {
    taken = false;
}

bool Crystal::getTaken() const {
    return taken;
}

void Crystal::setTaken(bool t) {
    taken = t;
}

void Crystal::draw() const {
    if (visited && !taken) {
        cout << symbol;
    } else if (taken) {
        cout << " ";
    } else {
        cout << ".";
    }
}

int Crystal::visit(Player& p) {
    if (!visited) {
        visited = true;
        cout << "You found a magic crystal." << endl;
    }
    return 1;
}
