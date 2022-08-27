// Write a function to take input employee data from the user. [ Refer structure from question 1 ]

#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

struct Employee input()
{
    struct Employee E;
    printf("Enter the employee id, name and salary:");
    scanf("%d",&E.id);
    fflush(stdin);
    fgets(E.name,20,stdin);
    E.name[strlen(E.name)-1]='\0';
    scanf("%d",E.salary);

    return E;
}

int main()
{
    struct Employee E1;
    E1=input();
    return 0;
}
