// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
#include<iostream>
using namespace std;

class Time
{
    private:
        int hrs,min,sec;
    public:
        void setData(int h,int m,int s)
        {
            hrs=h;
            min=m;
            sec=s;
        }
        void showData()
        {
            cout<<hrs<<"hr "<<min<<"min "<<sec<<"sec"<<endl;
        }
};

int main()
{
    Time t1,t2;
    t1.setData(22,15,47);
    t2.setData(8,18,23);

    t1.showData();
    t2.showData();

    return 0;
}