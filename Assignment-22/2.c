/*
Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically
to accommodate the data values. Now take the input from the user and display the average of data values.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *p,i=0;
    float sum=0;
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

    printf("The average of entered numbers in the array is = %f",sum/n);

    free(p);
    return 0;
}

