// Write a function to reverse a string word wise. (For example if the given string is “Mysirg Education Services” then 
// the resulting string should be “Services Education Mysirg” )

#include<stdio.h>
#include<string.h>

void reverse_strword(char*);

int main()
{
    char str[50]="Mysirg Education Services";
    reverse_strword(str);
    printf("The word wise reverse string is:\n %s",str);
    return 0;
}

void reverse_strword(char *s)
{
    int i, strt_index,len,k;
    char tempstr[50]={'\0'}, temp;

    len=strlen(s);
    int j=len;

    for(i=0;s[i];i++)
    {
        j-=1;
        tempstr[j]=s[i];     
    }

    strt_index=0;
    i=0;

    while(i<len)
    {
 
        if(tempstr[i]==' ')
        {
            
            k=i;
            for(j=strt_index;j<(strt_index+i)/2;j++)
            {
                k-=1;
                temp=tempstr[k];
                tempstr[k]=tempstr[j];
                tempstr[j]=temp;
            }
            strt_index=i+1;
        }

        if(i==(len-1))
        {
            k=len;
            for(j=strt_index;j<=(strt_index+i)/2;j++)
            {
                k-=1;
                temp=tempstr[k];
                tempstr[k]=tempstr[j];
                tempstr[j]=temp;
            }
        }
    
        i+=1;
    }

    for(i=0;tempstr[i];i++)
        s[i]=tempstr[i];    // copying the reversed string from temporary to str array.
       
}

