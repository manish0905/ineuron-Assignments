// Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result

#include<iostream>
using namespace std;

class StaticCount
{
    private:
        static int count;
    public:
        static void counting()
        {
            count++;
            cout<<"Function Call - "<<count<<" and count= "<<count<<endl;
        }
};
int StaticCount::count;

int main()
{
    StaticCount sc1;
    sc1.counting();
    StaticCount::counting();
    StaticCount::counting();
    return 0;
}
