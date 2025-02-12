#include "nightcrawler.h"
#include <iostream>

Nightcrawler::Nightcrawler() : Location('@') {
    taken = false;
}

bool Nightcrawler::getTaken() const
{
    return taken;
}

void Nightcrawler::setTaken(bool t) {
    taken = t;
}

void Nightcrawler::draw() const {
    if (visited && !taken) {
        cout << symbol;
    } else if (taken) {
        cout << " ";
    } else {
        cout << ".";
    }
}

int Nightcrawler::visit(Player& p) {
    if (!visited) {
        visited = true;
        cout << "You must fight this monster." << endl;
    }
    return 1;
}
