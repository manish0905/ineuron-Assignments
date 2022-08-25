// Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>

int main()
{
    int i,j,count_alpha=0,count_digi=0,count_spch=0;
    char str[20]="MySirG Team Gr8!";
    
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            count_alpha+=1;
        else if (str[i]>='a' && str[i]<='z')
            count_alpha+=1;
        else if(str[i]>='0' && str[i]<='9')
            count_digi+=1;
        else
            count_spch+=1;
    }

    printf("The following are the counts:\n Alphabets - %d\n Digits - %d\nSpecial Characters - %d",count_alpha,count_digi,count_spch);

    return 0;
}