// From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>

int main()
{
    char ip_list[5][20]={"192.68.1.1", "168.388.2.1","184.2.1.455","192.255.210.1","166.16.210.1"};
    char temp[20]={'\0'};
    int i,j;
    int value,count;
    char *token=0;

   for(i=0;i<5;i++)
   {
        strcpy(temp,ip_list[i]);
        count=0;
        int flag=0;
        token=strtok(temp,".");

        while(token!=NULL)
        {
            value=atoi(token);
            count+=1;
            if(!(value>=0 && value<=255))
            {
                printf("%s - Invalid IP Address\n",ip_list[i]);
                flag+=1;
                break;
            }
            if(flag==1)
                    break;
            token=strtok(NULL,".");
        }
        if(count==4 && flag !=1)
            printf("%s - VALID IP Address\n",ip_list[i]);
   }
    return 0;
}
