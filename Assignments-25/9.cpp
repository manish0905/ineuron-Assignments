// Define a class Circle and define an instance member function to find the area of the circle.
#include<iostream>
using namespace std;

class Circle
{
    private:
    int radius;
    float area;
    void cal_circle_Area()
    {
        area=3.14*radius*radius;
    }
    public:
        void setData(int r){radius=r;}
        int getRadius(){return radius;}
        float getArea()
        {
            cal_circle_Area();
            return area;
        }
};

int main()
{
    Circle c1,c2;
    c1.setData(8);
    c2.setData(4);
    cout<<"Area of Circle with radius "<<c1.getRadius()<<" is "<<c1.getArea()<<endl;
    cout<<"Area of Circle with radius "<<c2.getRadius()<<" is "<<c2.getArea()<<endl;
    return 0;
}
