// Find out the maximum and minimum from an array using dynamic memory allocation in C.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *p,i,j,temp=0;

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
        for(j=1+i;j<n;j++)
            if(*(p+i)<*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }


    printf("The sorted array is: ");
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    
    printf("\nThe maximum element of the array is = %d",*p);
    printf("\nThe minimum element of the array is = %d",*(p+(i-1)));

    free(p);
    return 0;
}