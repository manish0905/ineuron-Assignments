// Problem 1:
// Suppose there are two roads,
// Road 1: ABC Road, represented by equation 5x + y - 3 = 0
// Road 2: XYZ Road, represented by equation 2x + 3y + 1 = 0
// These two roads meet each other at a chowk, called 123 Chowk.
// Determine at which angle , these two roads meet each other at chowk.

#include<stdio.h>
#include"Library.h"

int main()
{
    double angle_at_chowk;
    
    angle_at_chowk=find_angle(5,1,2,3); //calling the find_angle function defined in Library.c file and passing the parameters.
    
    printf("Angle at which these roads meets at 123 Chowk: %0.1lf degrees\n",angle_at_chowk);

    return 0;
}