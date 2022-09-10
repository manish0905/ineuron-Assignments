// Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;

void max(int,int);
void max(float,float);

int main()
{
    int a1,b1;
    float a2,b2;
    cout<<"Enter the two integer numbers: ";
    cin>>a1>>b1;
    max(a1,b1);
    cout<<"Enter two real numbers: ";
    cin>>a2>>b2;
    max(a2,b2);
    return 0;
}

void max(int x,int y)
{
    if(x>y)
        cout<<x<<" Greatest no."<<endl;
    else
        cout<<y<<" Greatest no."<<endl;
}

void max(float x,float y)
{
    if(x>y)
        cout<<x<<" Greatest no."<<end1;
    else
        cout<<y<<" Greatest no."<<endl;
}