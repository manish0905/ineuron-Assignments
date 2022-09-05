//Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;

int main()
{
    int a[10]={2,3,4,5,1,6,7,8,9,10};
    int i,sum=0;
    for(i=0;i<10;i++)
        sum=sum+a[i];
    cout<<"The SUM if all the numbers of the array = "<<sum;

    return 0;
}
