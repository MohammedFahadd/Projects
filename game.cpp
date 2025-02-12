// game.cpp

#include "game.h"
#include <iostream>
#include <fstream>

using namespace std;

Game::Game() : world(nullptr), rows(0), cols(0), playerRow(0), playerCol(0) {}

Game::~Game() {
    // Deallocate memory for the world
    if (world != nullptr) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                delete world[i][j];
            }
            delete[] world[i];
        }
        delete[] world;
    }
}

void Game::setUpGame( const string& filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Unable to open file." << endl;
        return;
    }

    // Read rows and columns
    file >> rows >> cols;

    // Initialize the world
    world = new Location**[rows];
    for (int i = 0; i < rows; i++) {
        world[i] = new Location*[cols];
    }

    // Read the map and create Location objects
    char symbol;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            file >> symbol;
            switch (symbol) {
                case '.':
                    world[i][j] = new Location(symbol);
                    break;
                case 'C':
                    world[i][j] = new Crystal;
                    break;
                case '+':
                    world[i][j] = new Sword;
                    break;
                case '@':
                    world[i][j] = new Nightcrawler;
                    break;
                case '#':
                    world[i][j] = new Shield;
                    break;
                case '^':
                    world[i][j] = new Healthcapsule;
                    break;
                case '&':
                    world[i][j] = new Kingcrawler;
                    break;
                case '*':
                    world[i][j] = new Princess;
                    break;
                default:
                    cerr << "Error: Unknown symbol encountered in the map." << endl;
                    break;
            }
        }
    }

    file.close();
}

void Game::drawGame() {
    cout << "This is the current game state:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i == playerRow && j == playerCol) {
                cout << "P";  
            } else if (world[i][j] != nullptr) {
                world[i][j]->draw();  
            } else {
                cout << ".";  
            }
        }
        cout << endl;
    }
}

void Game::playGame() {
    char move;
    bool continueExploring = true;
    setUpGame("datamap.txt");

    do {
        drawGame();

        cout << "Enter your move (W/A/S/D): ";
        cin >> move;

        switch (move) {
            case 'W':
            case 'w':
                if (playerRow > 0) {
                    playerRow--;
                } else {
                    cout << "Invalid move! You cannot go off the forest." << endl;
                }
                break;
            case 'A':
            case 'a':
                if (playerCol > 0) {
                    playerCol--;
                } else {
                    cout << "Invalid move! You cannot go off the forest." << endl;
                }
                break;
            case 'S':
            case 's':
                if (playerRow < rows - 1) {
                    playerRow++;
                } else {
                    cout << "Invalid move! You cannot go off the forest." << endl;
                }
                break;
            case 'D':
            case 'd':
                if (playerCol < cols - 1) {
                    playerCol++;
                } else {
                    cout << "Invalid move! You cannot go off the forest." << endl;
                }
                break;
            default:
                cout << "Invalid move! Please try again." << endl;
        }

        if (world[playerRow][playerCol] != nullptr) {
            world[playerRow][playerCol]->visit(p);
        }

        cout << "Do you want to continue exploring? (Y/N): ";
        cin >> move;
        if (move != 'Y' && move != 'y') {
            continueExploring = false;
        }
    } while (continueExploring);
}
