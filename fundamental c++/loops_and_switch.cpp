/*
    general code block for switch statement:

    switch (exp) {
        case x:
            //code block
            break;
        case y:
            //code block
            break;
        default:
            break;
    }
*/

#include <iostream>
using namespace std;

int main() {
    // int i = 0;
    // while (i < 5) {
    //     cout << i << "\n";
    //     i++ ;
    // }

    // do {
    //     cout << i << "\n";
    //     i++ ;
    // } while (i < 5);

    // for (int i = 0; i <= 10; i = i + 2) {
    //     cout << i << "\n";
    // }

    // for (int i = 0; i <= 2; ++i) {
    //     cout << "Outer: " << i << "\n";
    //     for (int j = 1; j <= 3; ++j) {
    //         cout << "inner" << j << "\n";
    //     }
    // }


    //foreach loop:
    // int myNum[5] {10,20,30,40,50};
    // for (int i: myNum){
    //     cout << i << "\n";
    // }

    //getting the size of array

    int numbers[5] = {10,20,30,40,50};
    // cout << sizeof(numbers);

    // int getArrayLenght = sizeof(numbers)/sizeof(int);
    // cout << "\n" << getArrayLenght;


    //iterating with sizeof:

    // for (int i = 0; i < sizeof(numbers)/sizeof(int); i++) {
    //     cout << numbers[i] << "\n";
    // }

    // ----------------------------------------------------------

    // Multidimensional Array

    string letters[2][2][2] = {
        {
            { "A", "B" },
            { "C", "D" }
        },
        {
            { "E", "F" },
            { "G", "H" }
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letters[i][j][k] << "\n";
            }
        }
    }
}