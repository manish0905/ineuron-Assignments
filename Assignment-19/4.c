// Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>

int main()
{
    char cities[5][20]={"delhi","bengaluru","bhopal","gwalior", "ujjain"};
    char srch_str[20];
    int i;

    printf("Enter the city name to be searched:");
    gets(srch_str);

   for(i=0;i<5;i++)
    if((strcmp(srch_str,cities[i])==0))
       {
           printf("FOUND");
           break;
       }
   if(i==5)
    printf("Not found");

    return 0;
}
