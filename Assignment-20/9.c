//Write a program to print the elements of an array in reverse order.

#include<stdio.h>

int main()
{
    int array[10]={3,2,6,3,8,1,4,5,0,1};
    int i,*p,sum=0;
    p=array;

    for(i=9;i>=0;i--)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}