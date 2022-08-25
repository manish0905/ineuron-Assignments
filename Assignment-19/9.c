// Write a program that asks the user to enter a username. If the username entered is one of the names in the list 
// then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed
#include<stdio.h>
#include<string.h>

void fact();

int main()
{
    char user_list[5][20]={"pullit007","ineuron2","mysirgcpp","adminkk", "operator08"};
    char user_login[20];
    int i;

    printf("Please enter your user name:");
    gets(user_login);

    for(i=0;i<5;i++)
        if(!strcmp(user_login,user_list[i]))
        {
            fact();
            break;
        }   
    if(i==5)
        printf("Unauthorized user");

    return 0;
}

void fact()
{
    int n,i,fact=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact=fact*i;

    printf("The factorial of %d is %d",n,fact);
    
}
