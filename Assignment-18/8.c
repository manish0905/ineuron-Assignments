// Write a function to count words in a given string
#include<stdio.h>


int count_words_instr(char*);

int main()
{
    char str[50]="MySirG Education Services";
    printf("The no. of words in given string is %d",count_words_instr(str));
    return 0;
}

int count_words_instr(char *s)
{
    int i,count=1;
    for(i=0;s[i];i++)
        if(s[i]==' ')
            count+=1;

    return count;
}