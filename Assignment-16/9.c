// Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include<stdio.h>

int main()
{
    int matrix[3][3];
    int i,j, zero_value=0, nonzero_values=0;

    printf("Enter 9 elements of the matrix:");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&matrix[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            if(matrix[i][j]==0)
                zero_value+=1;
            else
                nonzero_values+=1;
        }

    if(zero_value>4)
        printf(" Sparse Matrix");
    else
        printf("Not a sparse matrix");

    return 0;
}