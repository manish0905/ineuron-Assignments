// Write a function to swap values of two in variables of calling function.
#include<stdio.h>

void swap(int*,int*);

int main()
{

    int a=4,b=5;
    int *p1, *p2;

    p1=&a;
    p2=&b;
    swap(p1,p2);

    printf("After swapping, the value of a = %d and b = %d",a,b);
    return 0;

}

void swap(int *v1,int*v2)
{
    int temp;
    temp=*v1;
    *v1=*v2;
    *v2=temp;
}
