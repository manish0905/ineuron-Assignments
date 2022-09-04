//Write a program in C to find the largest element using Dynamic Memory Allocation.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, *p,i,j,gr=0;

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
                gr=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=gr;
            }


    printf("\nThe largest element of the entered Value is = %d",*p);

    free(p);
    return 0;
}
