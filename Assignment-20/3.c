// Write a program in C to find the transpose of a given matrix.
#include<stdio.h>

int main()
{
    int A[3][3]={{1,2,-3},{4,-5,6},{7,8,-9}};
    int A_transpose[3][3];
    int i,j;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            A_transpose[i][j]=A[j][i];

    printf("Transpose of a matrix:\n");
    for(i=0;i<3;i++)
    {    
        for(j=0;j<3;j++)
            printf("%d ",A_transpose[i][j]);
        printf("\n");
    }           
    return 0;
}