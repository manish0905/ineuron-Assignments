// Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
#include<string.h>

int main()
{
    char cities[5][20]={"delhi","bengaluru","bhopal","gwalior", "ujjain"};
    int i;

    // reading and displaying the 2D string array;
    printf("The 5 city names are:\n");

    for(i=0;i<5;i++)
        printf("%s \n",cities[i]);

    return 0;
}
