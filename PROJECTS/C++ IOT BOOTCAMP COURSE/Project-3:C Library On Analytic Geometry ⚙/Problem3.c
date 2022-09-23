// Looking at an above image, actually that image is zoomed up version of pdf file. As we see there is ‘A’ shaped character,
// it has three vertices which has coordinates (20.077,11.598) , (26.526, 90.138) , (23.674, 32.579) We have to cover the 
// area under ‘A’ shaped character and colour it black. Calculate area under ‘A’ shaped character

#include<stdio.h>
#include"Library.h"

void main()
{
double area_under_A;

area_under_A = find_area(20.077,11.598,26.526,90.138,23.674,32.579);
printf("Area to be coloured black: %0.1lf Sq.Units\n",area_under_A);

}
