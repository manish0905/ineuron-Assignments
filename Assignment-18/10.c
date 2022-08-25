// Write a function to find the repeated character in a given string.

#include<stdio.h>

void rpt_ch_str(char*);

int main()
{
    char str[100]="MySirG - Prateek & Aditya sir";
    rpt_ch_str(str);
    return 0;
}

void rpt_ch_str(char *s)
{
    int i;
    int count_array[255]={0};
    

    for(i=0;s[i];i++)
    {
        count_array[s[i]]+=1;
    }

    printf("The repeated characters and there value is as follows:\n");
    for(i=0;i<255;i++)
        if(count_array[i]>1)
            printf("%c ---> %d \n",i, count_array[i]);

}