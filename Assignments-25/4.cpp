// Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
#include<iostream>
using namespace std;

class LargestNumber
{
    private:
        int n1,n2,n3,Largest_n;
        void calculateLargest()
        {
            
            if(n1>=n2 && n1>=n3)
                Largest_n=n1;
            else if(n2>=n1 && n2>=n3)
                Largest_n=n2;
            else
                Largest_n=n3;


        }
    public:
        void setData(int a,int b,int c){n1=a;n2=b;n3=c;}
        int getN1(){return n1;}
        int getN2(){return n2;}
        int getN3(){return n3;}
        int getLargest()
        {
            calculateLargest();
            return Largest_n;
        }
};

int main()
{
    LargestNumber l1,l2,l3;
    l1.setData(8,4,18);
    l2.setData(12,12,1);
    l3.setData(32,39,21);

    cout<<"The largest number of l1 "<<l1.getN1()<<" "<<l1.getN2()<<" "<<l1.getN3()<<" is "<<l1.getLargest()<<endl;
    cout<<"The largest number of l2 "<<l2.getN1()<<" "<<l2.getN2()<<" "<<l2.getN3()<<" is "<<l2.getLargest()<<endl;
    cout<<"The largest number of l3 "<<l3.getN1()<<" "<<l3.getN2()<<" "<<l3.getN3()<<" is "<<l3.getLargest()<<endl;

    return 0;
}