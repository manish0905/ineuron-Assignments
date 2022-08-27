// Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named
// Marks having elements roll no.,name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.

#include<stdio.h>
#include<string.h>

struct Marks
{
    int roll_no;
    char name[25];
    int chem_marks,maths_marks,phy_marks;
};

struct Marks input()
{
    struct Marks s;
    printf("\nEnter the students ROLL NO.:");
    scanf("%d",&s.roll_no);
    printf("\nEnter the students NAME:");
    fflush(stdin);
    gets(s.name);
    printf("\nEnter the Marks of Chemistry, Maths and Physics:");
    scanf("%d %d %d", &s.chem_marks,&s.maths_marks, &s.phy_marks);

    return s;
}

void display_perc(struct Marks m, int size)
{
    printf("Roll No.-%d\tName - %s\tPercentage= %d \n",m.roll_no,m.name,(m.chem_marks+m.maths_marks+m.phy_marks)/3);
}

int main()
{
    struct Marks st[5];
    int i;
    for(i=0;i<5;i++)
        st[i]=input();
    printf("\n Students percentage:\n");
    for(i=0;i<5;i++)
        display_perc(st[i],5);
    return 0;

}
