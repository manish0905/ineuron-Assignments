// Define a class Area and define instance member functions to find the area of the different shapes like
//  square, rectangle , circle etc.
#include<iostream>
using namespace std;

class Area
{
    private:
        int len,brth,len_square,radius;
        int area_rectangle,area_square;
        float area_circle;
    public:
        void setData_Rectangle(int l,int b) {len=l;brth=b;}
        void setData_Square(int l) {len_square=l;}
        void setData_Circle(int r) {radius=r;}
        int getRectangle_length() {return len;}
        int getRectangle_breadth() {return brth;}
        int getSquare_sideLength() {return len_square;}
        int getCircle_radius() {return radius;}
        int getArea_Rectangle() { cal_Area_rectangle(); return area_rectangle;}
        int getArea_Sqaure() { cal_Area_square(); return area_square;}
        float getArea_Circle() { cal_Area_circle(); return area_circle;}

        void cal_Area_rectangle() { area_rectangle=len*brth; }
        void cal_Area_square() { area_square=len_square*len_square; }
        void cal_Area_circle() { area_circle=3.14*radius*radius;}
};

int main()
{
    Area r1,s1,c1;
    r1.setData_Rectangle(4,7);
    s1.setData_Square(6);
    c1.setData_Circle(3);

    cout<<"Area of Rectangle with sides "<<r1.getRectangle_length()<<" "<<r1.getRectangle_breadth()<<" = "<<r1.getArea_Rectangle()<<endl;
    cout<<"Area of Square with side "<<s1.getSquare_sideLength()<<" = "<<s1.getArea_Sqaure()<<endl;
    cout<<"Area of circle with radius "<<c1.getCircle_radius()<<" = "<<c1.getArea_Circle()<<endl;

    return 0;
}