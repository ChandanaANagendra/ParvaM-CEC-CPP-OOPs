#include<iostream>
using namespace std;

class Interest{
    private:
        int principal, term, rate, totalInterest;
        float rateInPercent;

    public:
        int simpleInterest=0;
        Interest(){   //default constructor
            principal = 0;
            term = 0;
            rate = 0;
            totalInterest = 0;
            rateInPercent = 0;
            cout << "Total Interest Earned: " << totalInterest << endl;
        }

          void setValues(int a, int y){  // setter function
            principal = a;
            term = y;
        }

        void setRateValueInteger(int rateInInteger){  // setter function
            rate = rateInInteger;
        }

        void setRateValueFloat(float rateInFloat){  // setter function
            rateInPercent = rateInFloat;
        }

        Interest(int p, int t, int r){  //parameterized constructor
            setValues(p,t);
            setRateValueInteger(r);
            simpleInterest = (principal*term*rate)/100;
            cout << "Simple Interest for the following details: " << endl;
            cout << "Principal Amount: " << principal << endl;
            cout << "No. of Years(Term): " << term << endl;
            cout << "Rate of Interest(in Integer): " << rate << endl;
            totalInterest = principal + simpleInterest;
            cout << "Total Interest Earned: " << totalInterest << endl;

        }

            Interest(int p, int t, float rateInDecimal){   //parameterized constructor (3 parameters but 1 float)
                setValues(p,t);
                setRateValueFloat(rateInDecimal);
                simpleInterest = (principal*term*rateInPercent);
                cout << "Simple Interest for the following details: " << endl;
                cout << "Principal Amount: " << principal << endl;
                cout << "No. of Years(Term): " << term << endl;
                cout << "Rate of Interest(in Decimal): " << rateInPercent << endl;
                totalInterest = principal + simpleInterest;
                cout << "Total Interest Earned: " << totalInterest << endl;
        }

        ~Interest(){   //automatically called to free up the memory used by constructor when object has lost the scope
            cout << "Destructor has been called to destroy or free up the memory used by constructor";
        }

};
int main(){
    int amount, year, rateOfInterest;
    float interestRate;

    Interest int1;  //default constructor

    cout << "Enter the Principal Amount, No. of Years & Rate of Interest(eg. 5):";
    cin >> amount >> year >> rateOfInterest;

    
    Interest int2(amount, year, rateOfInterest);  

    cout <<"Enter the Principal Amount, No. of Years & Rate of Interest(eg. 0.05):";
     cin >> amount >> year >> interestRate;

     Interest int3(amount, year, interestRate);

}