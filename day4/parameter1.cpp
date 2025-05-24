#include<iostream>
using namespace std;

class Wish{ 
    private:
        string name;
        int age;

    public:
        Wish(){
            name = "Unknown";
            age = 0;
        }

        Wish(string n, int a);  // paramteterized constructor

        void birthdayWishes();
};
  // defining the rules of parameterized constructor outside the class using scope resolution operator
Wish :: Wish(string n, int a){  //syntax: classname :: constructor(parameters) (No return type required)

    name = n;
    age = a; 
}
  //defining the member function out of the clas using scope resolution operator
void Wish :: birthdayWishes(){    // syntax: return_type className :: member_function(parameters) (Return type is must required)
            cout << "Happy Birthday " << name << " !Now you're " << age
            << " years old." << endl;
    }

int main(){
    string personName;
    int personAge;

    Wish person1;   // object declared 
    person1.birthdayWishes();

    cout << "Enter your name:";
    cin >> personName;
    cout << "Enter your age:";
    cin >> personAge;

    Wish person2(personName, personAge);
    person2.birthdayWishes();
}