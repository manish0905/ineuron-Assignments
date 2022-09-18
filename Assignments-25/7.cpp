// Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.
#include<iostream>
using namespace std;

class Greatest
{
    private:
        int n1,n2,n3,greatest_n;
        void calculateGreatest()
        {
            
            if(n1>=n2 && n1>=n3)
                greatest_n=n1;
            else if(n2>=n1 && n2>=n3)
                greatest_n=n2;
            else
                greatest_n=n3;


        }
    public:
        void setData(int a,int b,int c){n1=a;n2=b;n3=c;}
        int getN1(){return n1;}
        int getN2(){return n2;}
        int getN3(){return n3;}
        int getGreatest()
        {
            calculateGreatest();
            return greatest_n;
        }
};

int main()
{
    Greatest l1,l2,l3;
    l1.setData(8,41,18);
    l2.setData(12,19,1);
    l3.setData(32,49,21);

    cout<<"The largest number of "<<l1.getN1()<<" "<<l1.getN2()<<" "<<l1.getN3()<<" is "<<l1.getGreatest()<<endl;
    cout<<"The largest number of "<<l2.getN1()<<" "<<l2.getN2()<<" "<<l2.getN3()<<" is "<<l2.getGreatest()<<endl;
    cout<<"The largest number of "<<l3.getN1()<<" "<<l3.getN2()<<" "<<l3.getN3()<<" is "<<l3.getGreatest()<<endl;

    return 0;
}