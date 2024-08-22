# Tiktaktoe game using C++
First basic project using C++ to create a tiktaktoe game. 
Author: Ming Zhang
Date: 23 August 2024


ttt.cpp is the main file that executes the game using the functions declared and defined by tik_functions.cpp and tik_functions.hpp.
tik_functions.hpp serves as the header file for declaring the functions defined in tik_functions.cpp.

tik_functions.cpp: contains various methods:
- createBoard(): Initialization of the board.
- startGame(): initializes and starts the game.
- player1turn(int placement): takes in an user input as the placement and places the marker for player1. If the input is invalid, it uses a recursive call to bring the player back to the user input. Will update the board after the input.
- player2turn(int placement): does exactly what player1turn does, but for player2.
- checkVictory(): Using comparisons to check if any "three-in-a-row" has been achieved.
- printBoard(): prints the board for the user to see after every move.

ttt.cpp executes the methods from tik_functions.cpp, and iterates through user turns using a forloop and a conditional statement that determines whose turn it is.
It also terminates the game if all 9 slots are filled and no winner is determined.
