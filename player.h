#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player {
private:
    string name;
    int age;

public:
    Player();
    Player(const string& playerName, int playerAge);

    string getName() const;
    int getAge() const;

    void setName(const string& playerName);
    void setAge(int playerAge);

    void print() const;
};

#endif 
