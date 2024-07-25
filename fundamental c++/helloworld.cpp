/*#include <iostream>
//header file library used for working with ip/op objs
using namespace std;

int main()
{
    // std::cout << "Hello World" << std::endl;
    cout << "Hello World!"; //pronounced "see-out" and << is an insertion operator
    return 0;
}*/

//without namespace

//variable usual format: type varname = val;
#include <iostream>
#include <string> // always required to use for using string
using namespace std;
int main(){
    //hello world statement
    std::cout << "Hello World!";

    //variables
    int myNum = 5; //integer 
    double myFloatNum = 5.99;
    char myLetter = 'D';
    // string myText = 'hello';
    bool myBoolean = true;

    cout << "Age: " << myNum << " years old.";

    //adding var
    // int x = 5;
    // int y = 6;
    // declaration of many variables: int x = 5, y = 6;
    // one Val to Mult variables: int x,y,z; x = y = z = 50;
    // if "const int m = 50;" -> m cant be updated
    // int sum = x + y;
    // cout << sum;

    // int x, y;
    // int sum;

    // cout << "Type a number: ";
    // cin >> x;
    // cout << "Type another number: ";
    // cin >> y;
    // sum = x + y;
    // cout << "Sum is: " << sum;

    string greeting = "hello";
    cout << greeting;

    return 0; 
}