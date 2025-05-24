#include<iostream>
using namespace std;

class Area{
    private:
        int length, breadth, height;
        float radius;

    public:
        int result;

        Area(){  //default constructor (no parameter)
            length = 0;
            breadth = 0;
            radius = 0;
            height = 0;
            result = 0;
            cout << "Area: " << result << endl;
        }

        Area(int a){  // parameterized constructor(1 parameter)
            length = a;
            result = length * length;
            cout << "Area of Square: " << result << endl;
        }

        Area(int c, int d){   // parameterized constructor(2 parameter)
            length = c;
            breadth = d;
            result = length * breadth;
            cout << "Area of Rectangel: " << result << endl;
        }

        Area(float r){  // parameterized constructor(1 parameter float)
            radius = r;
            result = 2 * 3.142 * radius;               
            cout << "Area of Circle: " << result << endl;
          
        }

         Area(int l, int b, int h){   //
            length = l;
            breadth = b;
            height = h;
            result = length * breadth * height;
            cout << "Area of cube: " << result << endl;
         }
};
int main(){
    Area a1;

    int len, wid, hgt;
    float rad;
   
    cout << "Enter the length of the square: ";
    cin >> len;

    Area a2(len);  // finding area of square (1 parameter - integer) 

    cout << "Enter the length and breadth of the rectangle: ";
    cin >> len >> wid;

    Area a3(len, wid);  // finding area of rectangle (2 parameters)

    cout << "Enter the radius of the circle: ";
    cin >> rad;
    
    Area a4(rad);  // finding the area of circle (1 parameter - float)

    cout << "Enter the length, breadth and height of the cube: ";
    cin >> len >> wid >> hgt;

    Area a5(len, wid, hgt);  //(finding the area of cube (3 parameter)
}