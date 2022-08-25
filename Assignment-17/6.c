// Write a program to reverse a string.
#include<stdio.h>
#include<string.h>

int main()
{
    int i,l;
    char str[20]="Ineuron cpp class", temp;
    
    l=strlen(str);
    for(i=0;i<=(l/2);i++)
    {
        temp=str[l-i-1];
        str[l-i-1]=str[i];
        str[i]=temp;

    }

    printf("The reversed string is '%s'.",str);

    return 0;
}