#include "powermax.h"
#include <iostream>

powermax::powermax() : Location('$') {
    taken = false;
}

bool powermax::getTaken() const {
    return taken;
}

void powermax::setTaken(bool t) {
    taken = t;
}

void powermax::draw() const {
    if (visited && !taken) {
        cout << symbol;
    } else if (taken) {
        cout << " ";
    } else {
        cout << ".";
    }
}

int powermax::visit(Player& p) {
    if (!visited) {
        visited = true;
        cout << "Yay!! you have gained max potential power of HEALTH,SHIELD and SWORD" << endl;
    }
    return 1;
}
