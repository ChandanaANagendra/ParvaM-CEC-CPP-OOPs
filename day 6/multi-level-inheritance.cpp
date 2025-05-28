#include<iostream>
using namespace std;
class Animal{
    string name;
    public:
        void setName(string animalName){
            name = animalName;
        }
        void showAnimal(){
            cout << "Name of the Animal: " << name << endl;
        }
};

//Animal -> carnivore (symbolic representation)
//animal class is deriving the carnivore class
//carnivore class is derived by/from animal class
class Carnivore : public Animal{  //derived class/base class - level1
    string vegetation;  // private member
    public:
        void setFood(string food){
            vegetation = food;
        }

        string showFood(){
            cout << "Food type of Animal: " << vegetation << endl;
        }
};

//Mammal -> Carnivore (symbolic representation)
class Mammal : public Carnivore{   //derived class-level2
    string habitat;  //private member
   public:
        void setHabitat(string place){
            habitat = place;
      //showFood();
        }
        void showHabitat(){
            cout << "Living Place: " << habitat << endl;
        }
};

int main(){
    string animal_name, food_type, place_of_living;

    cout << "Enter the Name of the Animal, food type & place of living: ";
    cin >> animal_name >> food_type >> place_of_living;

    Animal a1;
    a1.setName(animal_name);
    a1.showAnimal();

    Carnivore c1;
    c1.setName(animal_name);
    c1.showAnimal();
    c1.setFood(food_type);
    c1.showFood();

    Mammal m1;
    m1.setName(animal_name);
    m1.showAnimal();
    m1.setFood(food_type);
    m1.showFood();
    m1.setHabitat(place_of_living);
    m1.showHabitat();

    m1.showAnimal();
    m1.showFood();
    m1.showHabitat();                                                                                                                                           
}
