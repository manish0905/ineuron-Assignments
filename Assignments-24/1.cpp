// Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;

void prime(int);

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    prime(n);
    return 0;
}

void prime(int num)
{
    int i;
    for(i=2;i<num;i++)
        if(num%i==0)
        {
            cout<<"NON-PRIME Number"<<endl;
            return;
        }
            
    if(i==num)
            cout<<"PRIME NUMBER"<<endl;
}