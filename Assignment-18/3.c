// Write a function to compare two strings.

#include<stdio.h>
#include<string.h>

int str_cmp(char*, char*);

int main()
{
    char str1[20], str2[20];

    printf("Enter string 1:");
    fgets(str1,20,stdin);

    printf("Enter string 2:");
    fgets(str2,20,stdin);

    printf("The comparsion value of string1 and string2 is %d", str_cmp(str1,str2));

    return 0;
}

int str_cmp(char *s1, char *s2)
{
    int i,l,val=0;
    l=strlen(s1);
    s1[l-1]='\0';

    l=strlen(s2);
    s2[l-1]='\0';

    for(i=0;s1[i]||s2[i];i++)
    {
        val=val+(s1[i]-s2[i]);
    }

    return val;
}