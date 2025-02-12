#include "location.h"

Location::Location(char s) : symbol(s), visited(false) {}

char Location::getSymbol() const {
    return symbol;
}

bool Location::getVisited() const {
    return visited;
}

void Location::setSymbol(char s) {
    symbol = s;
}

void Location::setVisited(bool v) {
    visited = v;
}

void Location::draw() const {
    if (visited) {
        std::cout << symbol;
    } else {
        std::cout << ".";
    }
}

int Location::visit(Player& p) {
    visited = true;
    return 1;
}
