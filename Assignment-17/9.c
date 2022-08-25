// Write a C program to sort a string array in ascending order.

#include<stdio.h>

int main()
{
    
    char str[20]="MysirG";
    int i,j,k;
       
    for(i=0;str[i];i++)
    {
        for(j=i+1;str[j];j++)
        {
            if(str[j]<=str[i])
            {
                k=str[i];
                str[i]=str[j];
                str[j]=k;
            }
        }
    }
    
    printf("Sorted string array:");
        printf("%s,",str);
    return 0;
}
