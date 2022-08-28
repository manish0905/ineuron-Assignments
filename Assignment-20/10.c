//Write a program to print a string in reverse using a pointer

#include<stdio.h>

int main()
{
    char str[25]="mysirg and ineuron";
    char *p;
    p=str;
    int i,len;
    for(i=0;*(p+i);i++);
    len=i-1;

    for(i=len;i>=0;i--)
        printf("%c",*(p+i));

    return 0;
}