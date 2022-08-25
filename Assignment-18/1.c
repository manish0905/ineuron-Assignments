// Write a function to calculate length of the string
#include<stdio.h>

int str_length(char*);

int main()
{
    char str[20];

    printf("Enter the string:");
    fgets(str,20,stdin);
    
    printf("The length of the string is %d", str_length(str));

    return 0;
}
    
   
int str_length(char *str)
{
    int i;
    for(i=0;str[i];i++);
    
    return i-1;

}