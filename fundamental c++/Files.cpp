#include <iostream>
#include <fstream>

using namespace std;

int main() {

    //Reading File
    // ofstream MyFile("Sample_file.txt");
    // MyFile << "This is a sample file to learn CPP";
    // MyFile.close();


    //Writing File
    string myText;
    ifstream MyReadFile("Sample_file.txt");

    while(getline (MyReadFile, myText)){
        cout << myText;
    }

    MyReadFile.close();
}