// Write a function to display employee data. [ Refer structure from question 1 ]

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
    scanf("%d",&E.salary);

    return E;
}

void display(struct Employee e)
{
    printf("%d %s %d\n",e.id,e.name,e.salary);
}

int main()
{
    struct Employee E1;
    E1=input();
    display(E1);
    return 0;
}
