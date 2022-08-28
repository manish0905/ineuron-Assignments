// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include<stdio.h>

void sort(int*,int);

int main()
{

    int array[5]={1,5,8,3,1};
    int *p;
    p=&array[0];
    sort(p,5);

    printf("The sorted array:\n");
    for(int i=0;i<5;i++)
        printf(" %d ",array[i]);

    return 0;
}

void sort(int *ptr, int size)
{
    int temp;
    for(int i=0;i<size;i++)
        for(int j=i+1;j<size;j++)
            if(*(ptr+i)>(*(ptr+j)))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }

}
