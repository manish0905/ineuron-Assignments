// Write a function to check whether a given string is an alphanumeric string or not. 
// (Alphanumeric string must contain at least one alphabet and one digit)

#include<stdio.h>
#include<stdlib.h>


void alphnum_str(char*);

int main()
{
    char str[20];

    printf("Enter the string:");
    fgets(str,20,stdin);

    alphnum_str(str);
    
    return 0;
}

void alphnum_str(char *str)
{
    int i,j,flag=0;

    for(i=0;str[i];i++)
    
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) 
        {
            flag+=1;
            break;
        } 

    for(i=0;str[i];i++)
        if(flag && (str[i]>='0' && str[i]<='9'))
        {
            printf("The entered string is Alphanumeric");
            exit(0);
        }
       
    printf("The entered string is NOT Alphanumeric");
            
}