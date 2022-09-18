// Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        char name[20],std;
        int roll_no;
    public:
        Student(char n[20],char s,int r)
        {
            strcpy(name,n);
            std=s;
            roll_no=r;
        }
        Student()
        {
            char n[20], stnd;
            int rol_no;
            cout<<"Enter the student name- ";
            fflush(stdin);
            fgets(n,20,stdin);
            strcpy(name,n);
            cout<<"Enter the class & roll no.- ";
            cin>>stnd>>rol_no;
            std=stnd;
            roll_no=rol_no;
        }
       
        void showStudent()
        {
            cout<<"Student Details: "<<endl<<"Name-"<<name<<" "<<"Standard-"<<std<<" "<<"Roll No.-"<<" "<<roll_no<<endl;
        }
};

int main()
{
    Student s1;
    s1.showStudent();
    Student s2("Rajesh",'5',3004);
    s2.showStudent();
    return 0;
}
