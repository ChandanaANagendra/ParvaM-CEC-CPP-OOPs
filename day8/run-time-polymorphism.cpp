#include<iostream>
using namespace std;

class Base{
    public:
        void showBase(){  
            cout << "Base member function has been called!" << endl;
        }
};

class Derived : public Base{  
    public:
        void showBase(){  //function overriding
            cout << "Derived member function has been called!" << endl;
            //syntax: base-class-name :: member-function
            Base::showBase(); //calling the member of base class using scope resolution operator
        }

};

//example 2:
class Animal{
    public:
        void makeSound(){
            cout << "Animal makes some sound!" << endl;
        }
};

class Dog : public Animal{
    public:
        void makeSound(){
            Animal :: makeSound();  //calling the base class - member function
            cout << "Dog barks!" << endl;
        }
};

class Cat : public Animal{
    public:
        void makeSound(){  //function overriding (same member function name)
            cout << "Cat meows!" << endl;
        }
};

int main(){
    //base b1;
    //b1.showBase();

    Derived d1;
    d1.showBase();

    Dog dog1;
    dog1.makeSound();

    Cat cat1;
    cat1.makeSound();
}