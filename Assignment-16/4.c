// Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>

int main()
{
    int A[3][3]={{1,2,-3},{4,-5,6},{7,8,-9}};
    int sum_rightDiagnal=0,i,j;

    for(i=0;i<3;i++)
        sum_rightDiagnal=sum_rightDiagnal+A[i][i];

    printf(" Sum of right diagonal of the matrix is %d",sum_rightDiagnal);
          
    return 0;
}