// Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include<iostream>
using namespace std;

class Factorial
{
    private:
        int n,fact;
        void calculateFactorial()
        {
            int t_fact=1;
            for(int i=1;i<=n;i++)
                t_fact*=i;
            fact=t_fact;
        }
    public:
        void setData(int num) { n=num;}
        int getN() { return n; }
              
        int getFact() 
        { 
            calculateFactorial();
            return fact;
        }
};

int main()
{
    Factorial f1,f2;
    f1.setData(5);
    f2.setData(10);

    cout<<"Factorial of "<<f1.getN()<<" = "<<f1.getFact()<<endl;
    cout<<"Factorial of "<<f2.getN()<<" = "<<f2.getFact()<<endl;
    return 0;
}
