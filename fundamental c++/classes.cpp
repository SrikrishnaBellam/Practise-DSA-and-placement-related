#include <iostream>
#include <string>

using namespace std;


// // class without a method
// // class MyClass {
// //     public: //Access Specifier
// //         int myNum;
// //         string myString;
// // };

// //class with method
// // class myClass {
// //     public:
// //         void myMethod() {
// //             cout << "Hello World!!";
// //         }
// // };


// //class with method defined outside the class
// // class myClass {
// //     public:
// //         void myMethod();
// // };

// // void myClass::myMethod() {
// //     cout << "Hello World!";
// // }

// //class with method and params
// class Car {
//     public:
//         int speed(int maxSpeed);
// };

// int Car::speed(int maxSpeed) {
//     return maxSpeed;
// }

// int main() {
//     // myClass myObj;

//     // myObj.myNum = 15;
//     // myObj.myString = "Some Text";

//     // cout << myObj.myNum << "\n";
//     // cout << myObj.myString;

//     // myObj.myMethod();

//     Car myObj;
//     cout << myObj.speed(200);
//     return 0;

//     return 0;
// }


// note that constructor is called automatically when the obj is created
// the method is called only when you manually call it withint he class
// with constructor;

// class Car{
//     public:
//         string brand;
//         string model;
//         int year;
//         Car(string x, string y, int z) {
//             brand = x;
//             model = y;
//             year = z;
//         }
// };

// constructor defined outside
// class Car {
//     public:
//         string brand;
//         string model;
//         int year;
//         Car (string x, string y, int z);
// };

// Car::Car(string x, string y, int z) {
//     brand = x;
//     model = y;
//     year = z;
// }

// int main() {
//     Car carObj1("BMW", "X5", 1999);
//     Car carObj2("Ford", "Mustang", 1969);

//   // Print values
//   cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
//   cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
//   return 0;
// }

// ENCAPSULATION

// class Employee {
//     private:
//         int salary;
    
//     public:
//         // Setter
//         void setSalary(int s) {
//             salary = s;
//         }
//         // Getter
//         int getSalary() {
//             return salary;
//         }
// };

// int main() {
//     Employee myObj;
//     myObj.setSalary(50000);
//     cout << myObj.getSalary();
//     return 0;
// }

//Inheritance
//Base class
// class Vehicle{
//     public:
//         string brand = "Ford";
//         void honk() {
//             cout << "Tuut, tuut! \n";
//         }
// };

// //Derived Class
// class Car: public Vehicle {
//     public:
//         string model = "Mustang";
// };

// int main() {
//     Car myCar;
//     myCar.honk();
//     cout << myCar.brand + " " + myCar.model;
//     return 0;
// }

// Inheritance Access Specifiers

// class Employee {
//     protected:
//         int sal;
// };

// class Programmer: public Employee {
//     public:
//         int bonus;
//         void setSal(int s) {
//             sal = s;
//         }
//         int getSal() {
//             return sal;
//         }
// };

// int main() {
//     Programmer myObj;
//     myObj.setSal(50000);
//     myObj.bonus = 15000;
//     cout << "Salary: " << myObj.getSal() << "\n";
//     cout << "Bonus: " << myObj.bonus << "\n";
//     return 0;
// }

//polymorphism

class Animal {
    public: 
        void animalSound() {
            cout << "The animals make sounds \n";
        }
};

class Pig: public Animal{ 
    public:
        void animalSound() {
            cout << "The pig says: wee wee \n";
        }
};

class Dog: public Animal {
    public:
        void animalSound() {
            cout << "The Dog says: bow bow \n";
        }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}
