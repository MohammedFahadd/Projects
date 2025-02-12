#include "player.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player() : age(0) {}

Player::Player(const std::string& playerName, int playerAge) : name(playerName), age(playerAge) {}

std::string Player::getName() const {
    return name;
}

int Player::getAge() const {
    return age;
}

void Player::setName(const std::string& playerName) {
    name = playerName;
}

void Player::setAge(int playerAge) {
    age = playerAge;
}

void Player::print() const {
    cout << "Name: " << name << ", Age: " << age << endl;
}
