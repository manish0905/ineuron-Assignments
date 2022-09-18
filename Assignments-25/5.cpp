// Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
#include<iostream>
using namespace std;

class ReverseNumber
{
    private:
        int num,rev_num;
        void findReverseNumber()
        {
            int x,temp=0;
            while(num)
            {
                x=num%10;
                num=num/10;
                temp=temp+x;
                if(num!=0)
                {
                    temp=temp*10;
                }
            }
            rev_num=temp;
        }
    public:
        void setData(int a){num=a;}
        int getData(){return num;}
        int getReverseNumber()
        {
            findReverseNumber();
            return rev_num;
        }
};

int main()
{
    ReverseNumber r1,r2;
    r1.setData(4235);
    r2.setData(3210);
    cout<<"The reverse number of "<<r1.getData()<<" is "<<r1.getReverseNumber()<<endl;
    cout<<"The reverse number of "<<r2.getData()<<" is "<<r2.getReverseNumber()<<endl;

    return 0;
}