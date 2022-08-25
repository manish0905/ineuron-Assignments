// Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>

int main()
{
    int first[3][3],second[3][3], multi_result[3][3];
    int i,j,k,sum;

    printf("Enter the 9 numbers for the first matrix: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&first[i][j]);
    }

    printf("Enter the 9 numbers for the second matrix: ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&second[i][j]);

    
    for(i=0;i<3;i++)
    {    
        
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+first[i][k]*second[k][j];
                multi_result[i][j]=sum;
            }
        }
        
        
    }

    printf("The resultant matrix after multiplication of A & B matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",multi_result[i][j]);
        printf("\n"); 
    }

    return 0;
}