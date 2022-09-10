// Write functions using function overloading to add two numbers having different data types
#include<iostream>
using namespace std;

float add(int,float);
float add(float,int);

int main()
{
    int a1,b1;
    float a2,b2;
    cout<<"Enter the integer and float values : ";
    cin>>a1>>a2;
    cout<<"Sum of int and float values: "<<add(a1,a2)<<endl;

    cout<<"Enter the float and integer values : ";
    cin>>b2>>b1;
    cout<<"Sum of float and int values: "<<add(b2,b1)<<endl;
    
    return 0;
}

float add(int x,float y)
{
    return x+y;
}

float add(float x,int y)
{
    return x+y;
}