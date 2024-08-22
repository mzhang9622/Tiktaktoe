/*
Author: Ming Zhang
Date: 23 August 2024
Title: Tiktaktoe
*/
#include <iostream>
#include <vector>
#include "tik_functions.hpp"
using namespace std;
// define functions for tik_functions.hpp here

// vector for storing players' moves
std::vector<string> board = {};

// Markers for the player's moves
std::string player1 = "X";
std::string player2 = "O";

// Creates a board
void createBoard() {
    for (int i = 0; i < 9; i++) {
        board.push_back(" ");
    }

    // board[0] = "1";
}

// initializes the game
void startGame() {
    cout << "WELCOME TO TIKTAKTOE!\n";
    cout << "Board location is labeled by numbers, as shown below: \n";
    cout << "1 | 2 | 3\n---------\n4 | 5 | 6\n---------\n7 | 8 | 9\n";
    // cout << board.size() << "\n";
    // cout << board[0] << "\n";
}


// Player 1's turn. Uses a recursive call to input a valid value if invalid.
void player1turn(int placement) {

    int newPlacement;
    if (std::to_string(placement) == board[placement - 1] || placement > 9 || placement < 1) {
            cout << "\nINVALID INPUT, PLEASE TRY AGAIN.\n";
            cin >> newPlacement;
            player1turn(newPlacement);
    }

    board[placement - 1] = player1;

}

// Player 2's turn. Uses a recursive call to input a valid value if invalid.
void player2turn(int placement) {

    int newPlacement;
    if (std::to_string(placement) == board[placement - 1] || placement > 9 || placement < 1) {
            cout << "\nINVALID INPUT, PLEASE TRY AGAIN.\n";
            cin >> newPlacement;
            player2turn(newPlacement);
    }

    board[placement - 1] = player2;

}

// checking each slot to see if a victory is achieved by any of the players
void checkVictory() {

    // checks combinations on the board and exits when either one wins
    if (board[0] == player1) {

        if ((board[0] == board[1] && board[1] == board[2]) ||
            (board[0] == board[3] && board[3] == board[6]) || 
            (board[0] == board[4] && board[4] == board[8])) {

                cout << "Player1 Wins!\n";
                exit(EXIT_SUCCESS);
        }

    } else if (board[0] == player2) {

        if ((board[0] == board[1] && board[1] == board[2]) ||
            (board[0] == board[3] && board[3] == board[6]) || 
            (board[0] == board[4] && board[4] == board[8])) {

                cout << "Player2 Wins!\n";
                exit(EXIT_SUCCESS);
        }

    }


    // checks more combinations
    if (board[4] == player1) {

        if ((board[4] == board[1] && board[1] == board[7]) ||
            (board[4] == board[3] && board[3] == board[5]) || 
            (board[4] == board[2] && board[4] == board[6])) {

                cout << "Player1 Wins!\n";
                exit(EXIT_SUCCESS);
        }

    } else if (board[4] == player2) {

        if ((board[4] == board[1] && board[1] == board[7]) ||
            (board[4] == board[3] && board[3] == board[5]) || 
            (board[4] == board[2] && board[4] == board[6])) {
                cout << "Player2 Wins!\n";
                exit(EXIT_SUCCESS);
        }
    }


    // checks the last 2 combinations
    if (board[8] == player1) {

        if ((board[8] == board[5] && board[5] == board[2]) ||
            (board[8] == board[7] && board[7] == board[6])) {

                cout << "Player1 Wins!\n";
                exit(EXIT_SUCCESS);
        }

    } else if (board[8] == player2) {

        if ((board[8] == board[5] && board[5] == board[2]) ||
            (board[8] == board[7] && board[7] == board[6])) {
                cout << "Player2 Wins!\n";
                exit(EXIT_SUCCESS);
        }
    }


    


    

}

// prints out the board
void printBoard() {
    cout << board[0] << " | " << board[1] << " | " << board[2] << "\n";
    cout << "---------\n";
    cout << board[3] << " | " << board[4] << " | " << board[5] << "\n";
    cout << "---------\n";
    cout << board[6] << " | " << board[7] << " | " << board[8] << "\n";
}