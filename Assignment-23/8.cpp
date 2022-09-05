//Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;

int main()
{
    int a=10,b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The value of a= "<<a<<" and b= "<<b<<" after the swapping.";
    return 0;
}
