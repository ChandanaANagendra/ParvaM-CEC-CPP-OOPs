#include<iostream>
using namespace std;

 //syntax
 //class class_name // class declaration
 class Student{
    public:
    //blueprint
    string name, college, branch;  //data
    int sem;
    
    void show(){  //member function
        cout << "Name: " << name << endl;
        cout << "College: " << college << endl;
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << sem << endl;

    }
 };

 int main(){
    Student student1;  //Object creation
    student1.name = "Chandana";  // Assigning the value to the class using object
    student1.college = "CEC";
    student1.branch = "AIML";
    student1.sem = 2;

     Student student2;  //Object creation
    student2.name = "prapula";  // Assigning the value to the class using object
    student2.college = "CEC";
    student2.branch = "CSE";
    student2.sem = 8;


    student1.show();
    student2.show();
 }

//  name1, college1, branch1, sem1
//  name1, college1, branch1, sem1
//  name1, college1, branch1, sem1

