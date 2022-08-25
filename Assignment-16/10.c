// Write a program in C to find the row with maximum number of 1s.

#include<stdio.h>

int main()
{
    int array[3][3]={{1,1,1},{1,3,7},{1,5,1}};
    int i,j,sum;
    int ones_count[3]={0};

    for(i=0;i<3;i++)
    {
        sum=0;
        for(j=0;j<3;j++)
        {
            if(array[i][j]==1)
                sum+=1;
        }
        ones_count[i]=sum;
    }

    
    if(ones_count[0]>ones_count[1])
        if(ones_count[0]>ones_count[2])
            printf("The %d row is with maximum 1s",1);
        else
            printf("The %d row is with maximum 1s",3);
    else if(ones_count[1]>ones_count[2])
        printf("The %d row is with maximum 1s",2);
    else
        printf("The %d row is with maximum 1s",3);

    
    return 0;
}