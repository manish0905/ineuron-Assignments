// Define a class Bank and define member functions to read principal , rate of interest and year.Another 
// member functions to calculate simple interest and display it. Initialise all details using constructor.
#include<iostream>
using namespace std;

class Bank
{
    private:
        float principal,rate,time;
    
    public:
        Bank()
        {
            float p,r,t;
            cout<<"Enter the pricipal amount, rate of interest and duration in years:- ";
            cin>>p>>r>>t;
            principal=p;
            rate=r;
            time=t;
        }
        Bank(float p,float r,float t)
        {
            principal=p;
            rate=r;
            time=t;
        }
        void disp_SI()
        {
            cout<<"The simple interest is "<<principal*rate*time/100<<endl;
        }
};

int main()
{
    Bank b1;
    b1.disp_SI();
    cout<<"For b2- "<<endl;
    Bank b2(10000,8,2.5);
    b2.disp_SI();
    return 0;
}