//Write a program to demonstrate memory leak in C.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *p,i=0;

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

    printf("The entered values are: ");
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));

    printf("Value of P before: %d \n",p);
    p=NULL;
    printf("Value of P after: %d \n",p);

    return 0;
}
