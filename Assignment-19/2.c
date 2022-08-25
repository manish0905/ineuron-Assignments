// Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>

int main()
{
    char cities[10][20], temp[20];
    int i,j;

    printf("Enter the 10 city names:");

    for(i=0;i<10;i++)
        gets(cities[i]);

    printf("The entered 10 cities are:");
    for(i=0;i<10;i++)
        printf("%s \n",cities[i]);

    // sorting codes

    for(i=0;i<10;i++)
        for(j=i+1;j<10;j++)
            if((strcmp(cities[i],cities[j])>0))
               {
                   strcpy(temp,cities[i]);
                   strcpy(cities[i],cities[j]);
                   strcpy(cities[j],temp);
               }
    printf("The sorted city names are as follows:\n");
    for(i=0;i<10;i++)
        printf("%s \n",cities[i]);

    return 0;
}
