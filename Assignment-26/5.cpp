// Define a class Date and write a program to Display Dateand initialise date object using Constructors
#include<iostream>
using namespace std;

class Date
{
    private:
    int dd,mm,yy;
    public:
        Date() {dd=16;mm=9;yy=2022;}
        Date(int d,int m,int y) {dd=d;mm=m;yy=y;}
        void setDate()
        {
            int d,m,y;
            cout<<"Enter the Day Month and Year "<<endl;
            cin>>d>>m>>y;
            dd=d;
            mm=m;
            yy=y;

        }
        void showDate() {cout<<"The date is "<<dd<<"-"<<mm<<"-"<<yy<<endl;}  
};

int main()
{
    Date d1,d2(12,8,2022);
    d1.showDate();
    d1.setDate();
    d1.showDate();
    d2.showDate();
    return 0;
}