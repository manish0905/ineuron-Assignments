// Write a program to count the number of vowels and consonants in a string using a pointer
#include<stdio.h>

int main()
{
    char str[25]="ineuron";
    char *p;
    int i,count_vowels=0,count_const=0;

    p=str;

    for(i=0;*(p+i);i++)
    {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
            count_vowels+=1;
        else
            count_const+=1;
    }

    printf("The number of vowels=%d and consonants=%d",count_vowels,count_const);

    return 0;
}
