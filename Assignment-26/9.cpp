// Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.

#include<iostream>
using namespace std;

class Bill
{
    private:
        int Account_id;
        float units,bill_amt;
    public:
        Bill() {Account_id=0;units=0;}
        void getDetails()
        {
        
            cout<<"Enter the Account id: ";
            cin>>Account_id;
            cout<<"Enter the units consumed: ";
            cin>>units;
        }
        void calculateBill()
        {
            if(units<101)
                bill_amt=units*1.2;
            else if(units<201)
                bill_amt=120+(units-100)*2;
            else
                bill_amt=320+(units-200)*3;
            cout<<"The bill amount is Rs "<<bill_amt<<endl;
        }
};

int main()
{
    Bill b1,b2;
    b1.getDetails();
    b1.calculateBill();
    b2.getDetails();
    b2.calculateBill();
    return 0;
}