// Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20]="ineuron";
    char str2[20]="mysirg";
    int i;

    for(i=0;str1[i];i++)
        str2[i]=str1[i];

    printf("After copying str1 to str2, str2 value is %s",str2);

    return 0;

}