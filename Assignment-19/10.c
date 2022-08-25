// Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char user_cred[4][2][20]={{"ineuron","123"},{"mysirg","234"},{"bootcamp","cpp"},{"python","12345"}};
    int i,j,k;
    char usrname[20],pwd[20];

    printf("Enter the username: ");
    gets(usrname);

    printf("Enter the password: ");
    gets(pwd);

    for(i=0;i<4;i++)
    {
         k=0;
        for(j=0;j<2;j++)
        {
            if(!strcmp(usrname,user_cred[i][j]))
            {
                k+=1;
                if(!strcmp(pwd,user_cred[i][1]))
                {
                    printf("User Authentication Successful");
                    k=0;
                    exit(0);
                    }
            }

        }
        if(k==1)
        {
            printf("Invalid Password, Authentication failed");
            break;
        }
    }

    if(i==4)
        printf("Invalid username, Authentication failed");

    return 0;
}