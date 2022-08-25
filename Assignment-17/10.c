// Write a program in C to Find the Frequency of Characters.

#include<stdio.h>

int main()
{
    char str[20]="ineuron";
    int freq_char[255]={0};
    int i;

    for(i=0;str[i];i++)
        freq_char[str[i]]++;

    
    printf("frequency of characters is:\n");
    for(i=1;i<255;i++)
        if(freq_char[i] != 0)
            printf("%c  -  %d\n",i,freq_char[i]);
        
    return 0;    
}