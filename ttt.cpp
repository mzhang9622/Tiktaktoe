#include <iostream>
#include <vector>
#include "tik_functions.hpp"
using namespace std;

int main() {
    int placement;

    createBoard();
    startGame();
    

    // Iterating through turns
    for (int i = 1; i < 10; i++){
        
        if (i % 2 == 1) {

            cout << "\nPlayer 1's Turn: \n";
            cin >> placement;
            player1turn(placement);
            printBoard();
            checkVictory();

        } else {

            cout << "\nPlayer 2's Turn: \n";
            cin >> placement;
            player2turn(placement);
            printBoard();
            checkVictory();
        }

    }

}