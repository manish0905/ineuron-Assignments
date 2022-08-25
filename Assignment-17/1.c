// Write a program to calculate the length of the string. (without using built-in method)

#include<stdio.h>

int main()
{
    int i,len=0;
    char str[20];
    
    printf("Enter the string: ");
    fgets(str,20,stdin);

    for(i=0;str[i];i++)
        len+=1;
    
    len=len-1;
    printf("The length of string is %d",len);

    return 0;

}