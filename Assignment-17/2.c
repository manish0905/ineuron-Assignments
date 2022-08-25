// Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>

int main()
{
    int i,count=0;
    char str[20]="Ineuron CPP Course";
    char search_ch='s';

    for(i=0;str[i];i++)
    {
        if(str[i]==search_ch)
            count+=1;
    }

    printf("The count of '%c' is %d.",search_ch,count);

    return 0;

}