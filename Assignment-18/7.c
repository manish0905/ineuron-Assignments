// Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void palindrom_str(char*);

int main()
{
    char str[20]="nitin";
    palindrom_str(str);

    return 0;
}

void palindrom_str(char *s)
{
    int i=0,j,l;
    l=strlen(s);
    
    j=l-1;

    while(i<j)
    {
        if(s[i]!=s[j])
        {
            printf("not a palindrome");
            exit(0);
        }
        
        i+=1;
        j-=1;
        if(i==j)
        {
            printf("Palindrome");
            exit(0);
        }
    }
    
}
