// Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]


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

void sortbysalary(struct Employee e[],int size)
{
    int i,j;
    struct Employee temp;
    for(i=0;i<size;i++)
        for(j=i+1;j<size;j++)
        {
            if(e[i].salary>e[j].salary)
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
}

int main()
{
    struct Employee E1[10];
    int i,j;
    for(i=0;i<10;i++)
        E1[i]=input();
    sortbysalary(E1,10);
    display(E1[9]);
    return 0;
}
