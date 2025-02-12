#include "healthcapsule.h"
#include <iostream>

Healthcapsule::Healthcapsule() : Location('^') {
    taken = false;
}

bool Healthcapsule::getTaken() const {
    return taken;
}

void Healthcapsule::setTaken(bool t) {
    taken = t;
}

void Healthcapsule::draw() const {
    if (visited && !taken) {
        cout << symbol;
    } else if (taken) {
        cout << " ";
    } else {
        cout << ".";
    }
}

int Healthcapsule::visit(Player& p) {
    if (!visited) {
        visited = true;
        cout << "You found health capsule." << endl;
    }
    return 1;
}
