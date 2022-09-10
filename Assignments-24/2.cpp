// Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;

void grt_digit(int);

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    grt_digit(n);
    return 0;
}

void grt_digit(int num)
{
    int temp=0;
    while(num)
    {
        
        if(num%10 > temp)
            temp=num%10;
        num/=10;
    }
    cout<<"The greatest value digit is "<<temp<<endl;
}
