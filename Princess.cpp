#include "princess.h"
#include <iostream>

Princess::Princess() : Location('*') {
    taken = false;
}

bool Princess::getTaken() const {
    return taken;
}

void Princess::setTaken(bool t) {
    taken = t;
}

void Princess::draw() const {
    if (visited && !taken) {
        cout << symbol;
    } else if (taken) {
        cout << " ";
    } else {
        cout << ".";
    }
}

int Princess::visit(Player& p) {
    if (!visited) {
        visited = true;
        cout << "You have saved the lovely princess" << endl;
    }
    return 1;
}
