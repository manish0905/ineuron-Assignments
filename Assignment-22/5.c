//Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *p,i=0,sum=0;

    printf("Enter the no. of values to be entered:");
    scanf("%d", &n);
    p=(int*)calloc(n,sizeof(int));

    if(p==NULL)
    {
        printf("ERROR, Memory allocation failed. \n");
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

    printf("The entered values are: ");
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));

    printf("\nThe SUM of entered Values is = %d",sum);

    free(p);
    return 0;
}
