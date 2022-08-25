// Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>

int main()
{
    int first[3][3],second[3][3], add_result[3][3];
    int i,j;

    printf("Enter the 9 numbers for the first matrix: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&first[i][j]);

    printf("Enter the 9 numbers for the second matrix: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&second[i][j]);

    printf("The resultant matrix after addition of A & B matrix:\n");
    for(i=0;i<3;i++)
    {    
        for(j=0;j<3;j++)
        {
            add_result[i][j]=first[i][j]+second[i][j];
            printf("%d  ",add_result[i][j]);
        }
        printf("\n");
    }
    return 0;
}