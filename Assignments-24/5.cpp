// Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;

void num_inFib(int);

int main()
{
    int n;
    cout<<"Enter the number to chek whether it's in Fibonacci series or not: ";
    cin>>n;
    num_inFib(n);
    return 0;
}

void num_inFib(int num)
{
    int a=-1,b=1,c=0;
    while(c<=num)
    {
        c=a+b;
        if(c==num)
        {
            cout<<"The number is in the Fibonacci series."<<endl;
            return;
        }
            
        a=b;
        b=c;
    }

    cout<<"The number is NOT in the Fibonacci series."<<endl;
}