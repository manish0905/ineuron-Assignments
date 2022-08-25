// Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>

int main()
{
    char lst_str[5][20]={"madam","children","nitin","ayush", "level"};
    int i,j,len;

   for(i=0;i<5;i++)
   {
        len=strlen(lst_str[i]);
        int k=len-1;

        for(j=0;j<len;j++)
        {
           if(lst_str[i][j]!=lst_str[i][k])
                break;
           else
            if(j==k)
                printf("%s \n",lst_str[i]);

           k-=1;

        }

   }

    return 0;
}