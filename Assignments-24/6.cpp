// Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;

void swap(int&, int&);

int main()
{
    int a=10, b=20;
    cout<<"Before swapping a = "<<a<<" and b = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping a = "<<a<<" and b = "<<b<<endl;
    return 0;
}

void swap(int &p,int &q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
}