// Write a program to convert a given string into lowercase

#include<stdio.h>

int main()
{
    int i;
    char str[20]="Ineuron CPP Course";
    

    for(i=0;str[i];i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
        

    printf("The converted string in LOWERCASE is '%s'.",str);

    return 0;
}