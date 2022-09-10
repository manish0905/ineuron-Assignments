// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;

float area(int);
int area(int, int);
float area(float,float);

int main()
{
    int r;
    cout<<"Enter the radius: ";
    cin>>r;
    cout<<"Area of circle: "<<area(r)<<endl;
    int l,b;
    cout<<"Enter the length and breadth: ";
    cin>>l>>b;
    cout<<"Area of rectangle: "<<area(l,b)<<endl;
    float bs,ht;
    cout<<"Enter the triangle base and height: ";
    cin>>bs>>ht;
    cout<<"Area of triangle: "<<area(bs,ht)<<endl;

    return 0;
}

float area(int r)
{
    return 3.14*r*r;
}

int area(int len, int br)
{
    return len*br;
}

float area(float b,float h)
{
    return 0.5*b*h;
}