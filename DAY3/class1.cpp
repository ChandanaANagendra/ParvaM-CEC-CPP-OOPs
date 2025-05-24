#include<iostream>
using namespace std;

class Car{
    //data 
public:
    string brand, model, variant, fuel_type;
    int year;
    float price;

    //member function
    void start(){
        cout << model << " started!" << endl;
    }
    void park(){
        cout << model << "parked!" << endl;
    }
    void stop(){
        cout << model << "stopped!" << endl;
    }

    void display(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Variant: " << variant << endl;
        cout << "Fuel type: " << fuel_type << endl;
        cout << "Launch year: " << year << endl;
        cout << "Price: " << price << endl;
    }

};

int main(){// object crecated for the class car
    Car c1;
    c1.brand = "Toyota";
    c1.model = "Innova";
    c1.variant = "6 Seater";
    c1.fuel_type = "Diesel";
    c1.year = 2024;
    c1.price = 15,00,000;
    c1.start();
    c1.park();
    c1.stop();
    c1.display();
    
}

