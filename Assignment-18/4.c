// Write a function to transform string into uppercase

#include<stdio.h>


void uppr_str(char*);

int main()
{
    char str[20];

    printf("Enter the string:");
    fgets(str,20,stdin);

    uppr_str(str);
    printf("The UPPECASE of the entered string is %s", str);

    return 0;
}

void uppr_str(char *str)
{
    int i;
    
    for(i=0;str[i];i++)
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        
}