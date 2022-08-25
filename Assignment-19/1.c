// Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, 
// taken from the user.

#include<stdio.h>

int main()
{
    int i,j,count;
    char str[5][20];

    printf("Enter the 5 strings:\n");
    for(i=0;i<5;i++)
        fgets(str[i],20,stdin);

    for(i=0;i<5;i++)
    {
        count=0;
        for(j=0;str[i][j];j++)
        {
            if((str[i][j]=='a')||(str[i][j]=='e')||(str[i][j]=='i')||(str[i][j]=='o')||(str[i][j]=='u'))
                count+=1;
        }
        printf("The volwels in %d %sstring is %d\n",i+1,str[i],count);
    }

    return 0;
}