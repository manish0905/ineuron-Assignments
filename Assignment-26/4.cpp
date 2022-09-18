// Define a class Counter and Write a program to Show Counter using Constructor
#include<iostream>
using namespace std;
class Counter
{
    private:
        static int count;
    public:
        Counter() { count++; }
        static void showCounter() {cout<<"Count = "<<count<<endl;}
};

int Counter::count;

int main()
{
    Counter c1,c3;
    c1.showCounter();
    Counter c2;
    Counter::showCounter();
    
    return 0;
}