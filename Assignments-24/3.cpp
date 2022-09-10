// Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;

int power(int,int);

int main()
{
    int x,y;
    cout<<"Enter the value of X and Y for calculating X raised to the power Y: "<<endl;
    cin>>x>>y;
    cout<<"The value of X raised to the power Y is "<<power(x,y)<<endl;
    return 0;
}

int power(int x, int y)
{
    int val=1,i;
    for(i=1;i<=y;i++)
        val=val*x;
    return val;
}
