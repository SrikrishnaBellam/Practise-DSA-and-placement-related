#include <iostream>
using namespace std;

int main() {bool ships[4][4] = {
    {0,1,1,0},
    {0,0,0,0},
    {0,0,1,0},
    {0,0,1,0}
};

int hits = 0;
int numberOfTurns = 0;
while (hits < 4) {
    int rows, column;

    cout << "Selecting coords:\n";
    cout << "Choose a row btw 0-3: ";
    cin >> rows;
    cout << "Choose a column btw 0-3: ";
    cin >> column;

    if (ships[rows][column]) {
        ships[rows][column] = 0;
        hits++;

        cout << "Hit! " << (4-hits) << " left. \n";
    } else {
        cout << "Miss\n\n";
    }

    numberOfTurns++;
}
cout << "Victory!\n";
cout << "You Won in " << numberOfTurns << " turns";
}
