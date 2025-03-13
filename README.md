This repository contains a terminal-based adventure game developed in C++, designed to showcase interactive gameplay utilizing advanced object-oriented programming (OOP) concepts such as inheritance and polymorphism.

Game Overview

The game features a dynamic environment where players navigate through various locations, collect items, and interact with different elements within the game world. The gameplay is driven by a series of custom classes, including Game, Player, Crystal, and Location, which together manage player movement, item collection, and overall game state.

Features
	•	Interactive Gameplay: Players can move through different locations within the game environment, making choices that affect their progress.
	•	Item Collection: Players collect items like Crystals that are essential for game progression.
	•	Dynamic Game States: The game responds to player choices and actions, offering a unique gameplay experience each time.
	•	OOP Practices: Utilizes inheritance and polymorphism to create an extensible and maintainable codebase.

Classes Overview
	•	Game: Main class that initializes and manages the game loop and states.
	•	Player: Handles player attributes like health and inventory, and player actions within the game world.
	•	Crystal: A collectible item class that players can find and use within the game.
	•	Location: Represents different locations in the game world, managing the interactions and transitions between different areas.

Getting Started

Prerequisites
	•	C++ compiler (GCC recommended)
	•	Basic knowledge of terminal or command-line interfaces

Compilation and Running
	1.	Clone the repository: git clone https://github.com/yourusername/terminal-based-adventure-game.git
 	2.	Change directory: cd terminal-based-adventure-game
  3.  Compile the game using a C++ compiler: g++ -o game Main.cpp Game.cpp Player.cpp Crystal.cpp Location.cpp
  4.  Run the game: ./game
