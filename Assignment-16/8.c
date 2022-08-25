// Write a program in C to print or display an upper triangular matrix.
#include<stdio.h>

int main()
{
    int array[3][3]={{1,2,-3},{4,-5,6},{7,8,-9}};
    int i,j;
    int row_sum[3]={0}, col_sum[3]={0};

    for(i=0;i<3;i++)
    {
        for(j=0+i;j<3;j++)
        {
            printf("%d ",array[i][j]);
        }
        if(i==0)
        printf("\n  ");
        
        else
            printf("\n    ");
    }

    return 0;
}