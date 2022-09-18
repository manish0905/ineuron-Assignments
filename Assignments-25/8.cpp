// Define a class Rectangle and define an instance member function to find the area of
// the rectangle.
#include<iostream>
using namespace std;

class Rectangle
{
    private:
    int len,br,area;
    void cal_Rectangle_Area()
    {
        area=len*br;
    }
    public:
        void setData(int l,int b){len=l;br=b;}
        void showData(){cout<<"Length= "<<len<<" Breadth= "<<br;}
        int getArea()
        {
            cal_Rectangle_Area();
            return area;
        }
};

int main()
{
    Rectangle r1,r2;
    r1.setData(8,4);
    r2.setData(12,4);
    cout<<"Area of Rectangle with ";
    r1.showData();
    cout<<" is "<<r1.getArea()<<endl;
    cout<<"Area of Rectangle with ";
    r2.showData();
    cout<<" is "<<r2.getArea()<<endl;
    return 0;
}
