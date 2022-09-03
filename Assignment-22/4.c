//Write a program to input and print text using dynamic memory allocation

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *str, c;
    int i=0,j=1;

    str=(char*)malloc(sizeof(char));
    if(str==NULL)
    {
        printf("Memory allocation failed. \n");
        return 0;
    }
    printf("Enter the text:");
    while(c!='\n')
    {
        c=getc(stdin);
        j++;
        str=(char*)realloc(str,j * sizeof(char));
        if(str==NULL)
        {
            printf("Memory allocation failed. \n");
            return 0;
        }
        str[i]=c;
        i++;
    }
    str[i]='\0';

    printf("The entered text is: %s",str);

    free(str);
    return 0;
}
