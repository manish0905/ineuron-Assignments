// Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>

int main()
{
    char emails[5][25]={"delhi@cities.com","bengaluru@cities.com","bhopal.cities.com","gwalior@cities.com", "ujjaincities.com"};
    int i;
    char *p=NULL;

   for(i=0;i<5;i++)
   {
        p = (strchr(emails[i],'@'));
        if( p == NULL)
        {
            printf("the odd string %s \n",emails[i]);

        }
   }

    return 0;
}