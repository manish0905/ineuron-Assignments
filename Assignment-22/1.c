 //Define a function to input variable length string and store it in an array without memory wastage.

#include<stdio.h>
#include<stdlib.h>

char* string();

int main()
{
  char *str;
  str=string();
  printf("The entered string is %s ", str);
  free(str);
  return 0;
}

char* string()
{
    char s, *p;
    int i=0,j=1;

    p=(char*)malloc(sizeof(char));
    if(p==NULL)
    {
        printf("ERROR, Memory allocation failed");
        return 0;
    }

    printf("Enter the string:");

    while(s!='\n')
    {
        s=getc(stdin);
        j++;
        p=(char*)realloc(p,j*sizeof(char));
        if(p==NULL)
        {
            printf("ERROR, Memory allocation failed");
            return 0;
        }
        p[i]=s;
        i++;
    }
    p[i]='\0';
    return p;

}

