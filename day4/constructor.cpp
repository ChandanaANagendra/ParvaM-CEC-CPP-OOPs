#include<iostream>
using namespace std;

class Calculate{
    public:
    //Member data
        int num1, num2;
        float res;

        //declare the constructor & it is also a default constructor
        //ctrl + ?: Comment
        
         Calculate(){
             num1=5;
             num2=10;
         }
        //member function
        void showOutput(){
            cout << "Addition: " << num1 + num2 << endl;
            cout << "subtraction: " << num1 - num2 << endl;
            cout << "multiplication: " << num1 * num2 << endl;
            cout << "quotient: " << num2 / num1 << endl;
            cout << "remainder: " << num2 % num1 << endl;
        }
};
int main(){
    //initializing the default value using constructor automatically when object is declared 
    Calculate c1;//object
    //Assigning the value to the data members
    Calculate c2;
    c2.num1 = 25;
    c2.num2 = 30;
    c1.showOutput();
    c2.showOutput();
}
