// Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>

int main()
{
    int array[3][3]={{1,2,-3},{4,-5,6},{7,8,-9}};
    int i,j;
    int row_sum[3]={0}, col_sum[3]={0};

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            row_sum[i]=row_sum[i]+array[i][j];
            col_sum[i]=col_sum[i]+array[j][i];
        }

    for(i=0;i<3;i++)
        printf("The sum of row & column %d  is Row - %d   Column - %d\n", i+1,row_sum[i],col_sum[i]);

    return 0;
}