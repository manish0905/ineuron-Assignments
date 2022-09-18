// Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.
#include<iostream>
using namespace std;

class Square
{
    private:
        int n,sqr_n;
        static int count;
        void cal_Square()
        {
            
            sqr_n=n*n;
            count+=1;
        }
    
    public:
        
        void setN(int a) {n=a;}
        int getN() {return n;}
        static int getCount() {return count;}
        int getSquare() 
        {
            cal_Square();
            return sqr_n;
        }
};

int Square::count;
int main()
{
    Square s1,s2,s3;
    s1.setN(5);
    s2.setN(9);
    s3.setN(25);
    cout<<"Square of "<<s1.getN()<<" = "<<s1.getSquare()<<endl;
    cout<<"count = "<<Square::getCount()<<endl;
    cout<<"Square of "<<s2.getN()<<" = "<<s2.getSquare()<<endl;
    cout<<"count = "<<Square::getCount()<<endl;
    cout<<"Square of "<<s3.getN()<<" = "<<s3.getSquare()<<endl;
    cout<<"count = "<<Square::getCount()<<endl;

    return 0;

}