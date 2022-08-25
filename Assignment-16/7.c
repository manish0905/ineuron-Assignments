// Write a program in C to print or display the lower triangular of a given matrix.

#include<stdio.h>

int main()
{
    int array[3][3]={{1,2,-3},{4,-5,6},{7,8,-9}};
    int i,j;
    int row_sum[3]={0}, col_sum[3]={0};

    for(i=0;i<3;i++)
    {
        for(j=0;j<i+1;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    return 0;
}