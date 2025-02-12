#include "sword.h"
#include <iostream>

Sword::Sword() : Location('+') {
    taken = false;
}

bool Sword::getTaken() const {
    return taken;
}

void Sword::setTaken(bool t) {
    taken = t;
}

void Sword::draw() const {
    if (visited && !taken) {
        cout << symbol;
    } else if (taken) {
        cout << " ";
    } else {
        cout << ".";
    }
}

int Sword::visit(Player& p) {
    if (!visited) {
        visited = true;
        cout << "You found a magical sword." << endl;
    }
    return 1;
}
