// Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;

void pasc(int);
int fact(int);
int comb(int,int);

int main()
{
    int n;
    cout<<"Enter the value of N lines to print Pascal Traingle : ";
    cin>>n;    
    pasc(n);
    return 0;
}

void pasc(int N)
{
    int i, j,k;
    for(i=0;i<=N;i++)
    {
        for(k=1;k<=N-i;k++)
            cout<<" ";

        for(j=0;j<=i;j++)
            cout<<comb(i,j)<<" ";

        cout<<endl;
    }
}

int comb(int n, int r)
{
    int ncr;
    ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr; 
}

int fact(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
