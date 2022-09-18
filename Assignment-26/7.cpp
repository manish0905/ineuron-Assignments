// Define a class Box and write a program to enter length, breadth and height and initialise objects using 
// constructor also define member functions to calculate volume of the box
#include<iostream>
using namespace std;

class Box
{
    private:
        int length,breadth,height;
    public:
        Box()
        {
            int l,b,h;
            cout<<" Enter the length, Breadth and Height of the box: ";
            cin>>l>>b>>h;
            length=l;
            breadth=b;
            height=h;
            
        }
        Box(int l,int b,int h) {length=l; breadth=b; height=h;}
        void cal_VolumeBox()
        {
            cout<<"Volume of the box = "<<length*breadth*height<<endl;
        }
       
};

int main()
{
    Box b1;

    b1.cal_VolumeBox();
    Box b2(4,2,6);
    cout<<"For b2: "<<endl;
    b2.cal_VolumeBox();
    return 0;
}