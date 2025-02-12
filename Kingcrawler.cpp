#include "kingcrawler.h"
#include <iostream>

Kingcrawler::Kingcrawler() : Location('&') {
    taken = false;
}

bool Kingcrawler::getTaken() const {
    return taken;
}

void Kingcrawler::setTaken(bool t) {
    taken = t;
}

void Kingcrawler::draw() const {
    if (visited && !taken) {
        cout << symbol;
    } else if (taken) {
        cout << " ";
    } else {
        cout << ".";
    }
}

int Kingcrawler::visit(Player& p) {
    if (!visited) {
        visited = true;
        cout << "You must defeat the king monster to save princess." << endl;
    }
    return 1;
}
