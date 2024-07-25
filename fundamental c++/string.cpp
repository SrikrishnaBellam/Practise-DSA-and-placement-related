#include <iostream>
#include <string>

using namespace std;

int main(){
    //String concatenation
    /*string firstName = "SriKrishna";
    string lastName = "Bellam";
    string fullName = firstName + lastName;
    cout << fullName;*/

    //append
    // string fnm = "SK";
    // string lnm = "B";
    // string ffnm = fnm.append(lnm);
    // cout << ffnm;

    //string length
    // string txt = "I am Sri Krishna Bellam";
    // cout << "The length of the txt string is: " << txt.length(); //or txt.size()

    /*//Access Strings
    string myString = "Hello";
    cout << myString[0]; 
    cout << myString.at(0);
    //both the above things are the same
    cout << myString.at(myString.length() - 1);//accessing the last string
    cout << myString[myString.length() - 1];

    myString.at(0) = 'J';
    cout << myString; //updating the string (mutable)*/

    // cin << = can only take one word as input
    string fullName;
    cout << "Type your fullname: ";
    getline(cin, fullName);
    cout << "FullName: " << fullName;

    return 0;
}