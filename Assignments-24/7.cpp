// Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;

int add(int,int,int=0);

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Addition of two numbers is = "<<add(a,b)<<endl;
    int c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Addition of two numbers is = "<<add(a,b,c)<<endl;
    return 0;
}

int add(int x,int y, int z)
{
    return x+y+z;
}