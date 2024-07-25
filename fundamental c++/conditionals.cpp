#include <iostream>
using namespace std;

int main(){
    int time = 22;
    // if (time < 10){
    //     cout << "Good morning";
    // } else if (time < 20){
    //     cout << "Good Day";
    // } else {
    //     cout << "Good night";
    // }

    //ternary operator

    string result = (time < 10) ? "Good day" : "Good evening";
    cout << result;
}