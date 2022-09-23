/* Library On Analytic Geometry */


#include<math.h>


//function to calculate the angle between two lines with equation ax+by+c=0
double find_angle(int a1,int b1,int a2,int b2) //a1,a2 and b1,b2 are the value of the lines equation ax+by+c=0
{
    double angle,value;

    value=((a2*b1*1.0)-(a1*b2))/((a1*a2*1.0)+(b1*b2));
    
    angle=atan(value); // in radians
   
    angle=angle*(180/3.142857); //in degrees
    if(angle<0)
        angle=-angle;
    return angle;
}

double find_distance(double lat1, double lon1,double lat2,double lon2) 
{
  double p,h;
    p = (22.0/7.0)/180.0;  // pi/180 , factor for converting degree to radians
  
    h = (0.5 - cos((lat2 - lat1) * p)/2) + (cos(lat1 * p) * cos(lat2 * p) * ((1 - cos((lon2 - lon1) * p))/2)); //part of haversine expression
        
    return asin(sqrt(h))*12742; // 2 * R; R = 6371 km;
}

double find_area(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double Area;
    Area = (0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2))));
    if(Area<0)
        Area=-Area;
    return Area;
}
