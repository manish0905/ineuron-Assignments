//Write a program to compute the sum of all elements in an array using pointers.

#include<stdio.h>

int main()
{
    int array[10]={3,2,6,3,8,1,4,5,0,1};
    int i,*p,sum=0;
    p=array;

    for(i=0;i<10;i++)
    {
        sum=sum+*(p+i);
    }

    printf("The sum of all elements in an array = %d",sum);
    return 0;
}
