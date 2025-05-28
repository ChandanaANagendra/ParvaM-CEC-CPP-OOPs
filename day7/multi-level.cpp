#include<iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;
        
    public:
        void setPersonDetails(string n, int a){
            name = n;
            age = a;
        }

        string showPersonDetails(){
           cout << "My name is " << name << ", and I'm " << age << "years old." << endl;
        }

};

class Employee : public Person{
    private:
        string company_name, emp_id;

    public:
        void setEmployeeDetails(string compName, string empId){
            company_name = compName;
            emp_id = empId;
}

void showEmployeeDetails(){
    cout << "I'm working in " << company_name << ", My Employee ID is: " << emp_id << endl;
}

};

class Developer : public Employee{
    private:
        string deptName;
        int experience;

    public:
        void setDeveloperDetails(string dept, int exp){
            deptName = dept;
            experience = exp;
        }

        void showDeveloperDetails(){
            cout << "I'll be working in " << deptName << "department.I've " << experience << "years of experience." << endl;
        }
};

int main(){
    string personName, companyName, dept_name, employee_id;
    int personAge, devExperience;

    cout << "Enter your name and age:";
    cin >> personName >> personAge;

    cout << "Enter your company name and employee:";
    cin >> companyName >> employee_id;

    cout << "Enter your Department Name and Years of Experience:";
    cin >> dept_name >> devExperience;

    Developer dev1; //object of developer class
    // dev1.name - cannot access private members out of the class (person)
    // dev1company.name - cannot access private members out of the class (employee)
    // dev1.deptname - cannot access private members out of the class (developer)
    dev1.setPersonDetails(personName, personAge);

    dev1.setEmployeeDetails(companyName, employee_id);

    dev1.setDeveloperDetails(dept_name, devExperience);
    
    dev1.showPersonDetails();
    dev1.showEmployeeDetails();
    dev1.showDeveloperDetails();
}