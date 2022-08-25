// Write a program to convert a given string into uppercase
#include<stdio.h>

int main()
{
    int i;
    char str[20]="Ineuron CPP Course";
    

    for(i=0;str[i];i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        

    printf("The converted string in UPPERCASE is '%s'.",str);

    return 0;
}