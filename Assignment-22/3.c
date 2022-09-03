/* Write a program to calculate the sum of n numbers entered by the user using malloc and free */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *p,i=0,sum=0;

    printf("Enter the no. of data values to be entered:");
    scanf("%d", &n);
    p=(int*)calloc(n,sizeof(int));

    if(p==NULL)
    {
        printf("ERROR, Memory allocation failed");
        return 0;
    }

    printf("Enter the %d Values: ",n);
    while(i<n)
    {
        scanf("%d",p+i);

        i++;
    }

    for(i=0;i<n;i++)
        sum=sum+*(p+i);

    printf("The SUM of entered numbers is = %d",sum);

    free(p);
    return 0;
}

