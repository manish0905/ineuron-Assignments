//Write a program to store information of 10 students and display them using structure.

#include<stdio.h>
#include<string.h>

struct students
{
    int roll_no;
    char name[20];
    int class_std;
};

struct students input()
{
    struct students s;
    printf("Enter the Roll no. Name and class standard:");
    scanf("%d",&s.roll_no);
    fflush(stdin);
    gets(s.name);
    scanf("%d",&s.class_std);

    return s;
}

void display(struct students stu,int size)
{
    printf("Roll No.=%d Name=%s Class standard=%d\n",stu.roll_no,stu.name,stu.class_std);
}

int main()
{
    struct students S[10];
    int i;

    for(i=0;i<10;i++)
        S[i]=input();
    for(i=0;i<10;i++)
        display(S[i],10);
    return 0;
}
