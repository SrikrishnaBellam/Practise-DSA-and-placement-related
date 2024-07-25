#include <iostream>
#include <string>
using namespace std;
// structures are way to group several related variables into one place;
    // unnamed structures
    // struct 
    // {
    //     string brand;
    //     string model;
    //     int year;
    // } myCar1, myCar2;

    // named structures
    // struct car
    // {
    //     string brand;
    //     string model;
    //     int year;
    // };

    // enumerations
    // enum Level {
    //     LOW,
    //     MEDIUM,
    //     HIGH
    // };

    // can give our own values
    // enum Level {
    //     LOW = 25,
    //     MEDIUM = 50,
    //     HIGH = 75
    // };

    //if only one is given
    // enum Level {
    //     LOW = 5,
    //     Medium, //6
    //     High//7
    // };
    
int main() {

    // for structures
    // car myCar1;
    // myCar1.brand = "BMW";
    // myCar1.model = "X5";
    // myCar1.year = 1999; 

    // car myCar2;
    // myCar2.brand = "Ford";
    // myCar2.model = "mustang";
    // myCar2.year = 2000; 

    // cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    // cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    // for enumeration
    //can be used for switch statments
    // enum Level myVar = LOW; // ouput - 0
    // enum Level myVar = MEDIUM; // ouput - 1
    // enum Level myVar = HIGH; // ouput - 2
    // cout << myVar; 
    

    // references
    //  string food = "PIZZA";
    //  string &meal = food;

    //  cout << food << "\n";
    //  cout << meal << "\n";

    //memory reference

    string food = "Pizza";

    cout << &food; // o/p => 0x5ffe60

    return 0;
}