//Write a program to calculate the length of the string using a pointer

#include<stdio.h>

int main()
{
    char str[25]="Mysirg's Cpp course";
    char *p;
    p=str;
    int i;

    for(i=0;*(p+i);i++);

    printf("The length of the string is %d",i);

    return 0;
}