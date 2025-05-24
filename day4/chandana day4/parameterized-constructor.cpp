#include<iostream>
using namespace std;

class Area{
    private:
        int length, breadth;

    public:
        int result;
        Area()
        {   //Default constructor (NO parameters)
            length=0;
            breadth=0;
        }

        Area(int a, int b){   // parameterized constructor (eg. 2 parameters)
            length = a;
            breadth = b;
        }

        void calculateArea(){
            result = length * breadth;
            cout << "Area of Rectangle with length: " << length << " and breadth: " << breadth
            << " is equal to " << result << endl;
        }
};

int main(){
    int len, wid;
    Area rect1;  //object created
    rect1.calculateArea();

    cout << "Enter the length and breadth for finding the Area of Rectangle: ";
    cin >> len >> wid;

    Area rect2(len, wid); // object 2 created
    rect2.calculateArea();
}