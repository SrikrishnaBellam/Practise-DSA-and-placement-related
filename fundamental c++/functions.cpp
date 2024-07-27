#include <iostream>
using namespace std;

// Note:: the function should be declared before the main() function
// rather we can call declare it above the main() and define it below the main().
// void myFunction() {
//     cout << "I just got executed!";
// }

// void myFunction(string fname);

// int main() {
//     myFunction("Liam");
//     return 0;
// }

// // void myFunction() {
// //     cout << "I just got executed";
// // }

// //with param:
// void myFunction(string fname) {
//     cout << fname << "Refsnes\n";
// }

// default param

// void myFunction (string country = "Norway") {
//     cout << country << "\n";
// }

// Multiple Param

// void myFunction (string fname, int age) {
//     cout << "name: " << fname << " age: " << age << " years old\n";
// }

// Return Values
// int myFunction(int x) {
//     return 5 + x;
// }

// Two params
// int myFunction (int x, int y) {
//     return x + y;
// }

// int main() {
//     // myFunction("Sweden");
//     // myFunction();
//     // myFunction("Liam", 3);

//     // cout << myFunction(3);

//     int z = myFunction(5,3);
//     cout << z;
//     return 0;
// }


// Pass by reference
// void swapNums (int &x, int &y) {
//     int z = x;
//     x = y;
//     y = z;
// }

// int main() {
//     // int fnum = 10;
//     int fnum, snum;
//     cin >> fnum;
//     // int snum = 20;
//     cin >> snum;

//     cout << "before swap: " << "\n";
//     cout << fnum << snum << "\n";

//     swapNums(fnum, snum);
//     cout << "After swap: " << "\n";
//     cout << fnum << snum << "\n";
//     return 0;
// }

// Pass array as param

// void myFunction(int myNumbers[5]) {
//     for (int i = 0; i < 5; i++) {
//         cout << myNumbers[i] << "\n";
//     }
// }

// int main() {
//     int myNumbers[] = {1,2,3,4,5};
//     myFunction(myNumbers);
//     return 0;
// }



// Function overloading
// int plusFunc(int x, int y) {
//     return x + y;
// }

// double plusFunc(double x, double y) {
//     return x + y;
// }

// int main() {
//     int mynum1 = plusFunc(5,3);
//     double mynum2 = plusFunc(4.3,5.2);

//     cout << "Int: " << mynum1 << "\n";
//     cout << "Double: " << mynum2 ;
    
//     return 0;
// }


// Small Recursion example

int sum(int k) {
    if (k > 0) {
        return k + sum(k-1);
    } else {
        return 0;
    }
}

int main() {
    int result = sum(10);
    cout << result;
    return 0;
}