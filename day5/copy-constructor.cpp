#include<iostream>
using namespace std;

class Teacher{
    private:  // by default all the data members of the class comes under private access specifier
        string branch;
    public:
        string name, qualification;
        int experience;

        Teacher(){  //default constructor
            branch = "AIML";
            name = "John Doe";
            qualification = " M.tech";
            experience = 5;
            cout << "Welcome, John Doe!" << endl;
        }


        void setData(string Tname, string Tbranch, string Tqual, int exp){  //setter
            name = Tname;
            branch = Tbranch;
            qualification = Tqual;
            experience = exp;
        }

        Teacher(string TeacherName, string TeacherBranch, string TeacherQual, int TeacherExp){  // parameterized constructor
            setData(TeacherName, TeacherBranch, TeacherQual, TeacherExp);
            cout << "Welcome, " << name << " to " << branch << "." << endl;
            cout << "You've graduated with, " << qualification << " degree.And you've " << experience << " years of experience " << endl;
        }
        // syntax for copy constructor: constructor(reference-constructor address-of-the-object)

        Teacher(Teacher &t){  //copy constructor
            name = t.name;
            branch = t.branch;
            qualification = t.qualification;
            experience = t.experience;
        }

        void getData(){  //getter
            cout << "Welcome, " << name << " to " << branch << "." << endl;
            cout << "You've graduated with, " << qualification << " degree.And you've " << experience << " years of experience " << endl;
        }

        ~Teacher(){  //destructor
            cout << "Object's work is done, Clearing the memory!"<< endl;
        }
};

int main(){
    string n, q, b;

    int e;

    Teacher teacher1;  // object created and invoked the default constructor

    cout << "Enter your name, qualification, branch and experience ";
    cin >> n >> q >> b >> e;

    Teacher teacher2(n, q, b, e);

    Teacher Teacher3 = teacher2;
    Teacher3.getData();
    
}