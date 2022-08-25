// Write a function to reverse a string.
#include<stdio.h>
#include<string.h>

void rev_str(char*);

int main()
{
    char str[20];

    printf("Enter the string:");
    fgets(str,20,stdin);

    rev_str(str);
    printf("The reverse of the string is %s", str);

    return 0;
}


void rev_str(char *str)
{
    int i,l;
    char temp;
    l=strlen(str);
    for(i=0;i<=(l/2);i++)
    {
        temp=str[l-i-1];
        str[l-i-1]=str[i];
        str[i]=temp;
    }

}


