// Write a program in C to find the sum of left diagonals of a matrix.

#include<stdio.h>

int main()
{
    int A[3][3]={{1,2,-3},{4,-5,6},{7,8,-9}};
    int sum_leftDiagnal=0,i,j;

    for(i=0;i<3;i++)
        sum_leftDiagnal=sum_leftDiagnal+A[i][2-i];

    printf(" Sum of left diagonal of the matrix is %d",sum_leftDiagnal);
          
    return 0;
}