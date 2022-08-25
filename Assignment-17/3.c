// Write a program to count vowels in a given string

#include<stdio.h>

int main()
{
    int i,j,count=0;
    char str[20]="Ineuron CPP Course";
    char vowels[12]="aeiouAEIOU";
    char search_ch='s';

    for(i=0;str[i];i++)
        for(j=0;vowels[j];j++)
        {
            if(str[i]==vowels[j])
                count+=1;
        }

    printf("The count of vowels in given string is %d.",count);

    return 0;
}