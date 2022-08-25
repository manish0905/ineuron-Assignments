// Write a function to transform string into lowercase

#include<stdio.h>


void lower_str(char*);

int main()
{
    char str[20];

    printf("Enter the string:");
    fgets(str,20,stdin);

    lower_str(str);
    printf("The LOWERCASE of the entered string is %s", str);

    return 0;
}

void lower_str(char *str)
{
    int i;
    
    for(i=0;str[i];i++)
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
        
}