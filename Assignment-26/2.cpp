// Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)

#include<iostream>
using namespace std;

class Time
{
    private:
    int hrs,min,sec;
    public:
    void setTime(int h,int m, int s)
    {
        hrs=h;
        min=m;
        sec=s;
    }
    void showTime()
    {
        cout<<"Time in HRS:MIN:SEC - "<<hrs<<":"<<min<<":"<<sec<<endl;
    }
    void normalize()
    {
        min=min+sec/60;
        sec=sec%60;
        hrs=hrs+min/60;
        min=min%60;            
    }
    Time add(Time t)
    {
        Time temp;
        temp.sec=sec+t.sec;
        temp.min=min+t.min;
        temp.hrs=hrs+t.hrs;
        temp.normalize();
        return temp;
    }
};

int main()
{
    Time t1,t2,t3;
    t1.setTime(5,50,30);
    t2.setTime(7,20,34);
    t3=t1.add(t2);

    t3.showTime();
    return 0;
}