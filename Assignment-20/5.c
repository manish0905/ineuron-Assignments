// Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>

int main()
{

    int a=45,b=9;
    int *p,*q;
    p=&a;
    q=&b;
    if(*p>*q)
        printf("The greatest number is %d",*p);
    else
        printf("The greatest number is %d",*q);
    return 0;
}
