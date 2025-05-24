#include<iostream>
using namespace std;

class Customer{
    public:
    string firstName, lastName;
    int age, rating;
    // initialized the constructor
    Customer(){
        firstName = "John";
        lastName = "Doe";
        age = 10;
        rating = 5;

    }
    void showDetails(){
        cout << "Customer Name: " << firstName << " " << lastName << endl;
        cout << "Customer Age: " << age << endl;
    }
    void giveRating(int rate);

    void showRating(){
        cout << "You've given " << rating << " star rating. Thank You!" << endl;
    }
};
//scope resolution operator

void Customer :: giveRating(int rate){  //defined the member function
    rating = rate;
}
int main(){
    Customer cust1;  // Invoked the constructor to assign the default value

    cust1.showDetails();
    cust1.showRating();
    
    Customer cust2;
    
    cust2.firstName = "Chandana";
    cust2.lastName = "chandu";
    cust2.age = 18;

    int starRating;

    cout << "Give your Rating(0 to 5):" ;
    cin >> starRating;
    cust2.showDetails();
    cust2.giveRating(starRating);
    cust2.showRating();
}