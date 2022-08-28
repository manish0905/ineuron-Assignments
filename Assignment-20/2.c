// Write a function to swap strings of two char arrays of calling functions.
#include<stdio.h>
#include<string.h>

void swap(char**,char**);

int main()
{

    char *a ="mysirg the great", *b ="ineuron"; 
    
    swap(&a,&b);

    printf("After swapping, the value of a = %s\n and\n b = %s",a,b);
    return 0;

}

void swap(char **v1,char **v2)
{
    char *temp;

    temp=*v1;
    *v1=*v2;
    *v2=temp;
}