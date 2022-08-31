#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void game_screen(char*,char*,int);  // for default game board screen and information.
void play_smartcomputer();          // for play with smart computer.
void play_evilcomputer();           // for play with evil computer.
void play_player();                 // for play with friend - pass and play.
void copy_matrix();                 // for copying default matrix to the inplay_matrix before the start of game.
int check_win();                    // for checking the winning condition.
int valid_move();                   // for counting 'X' and 'O' in the inplay_matrix[3][3];
void smart_computerMove(char);      // for defining the smart computer moves as per the human player input.
void evil_computerMove(char);       // for defiing the evil computer moves as per the human player input.
char player_Move();                 // for the player move inplay with smart and evil computer.
void p1_play_player();              // for player1 moves in play with other player.
void p2_play_player();              // for player2 moves in play with other player.


char default_matrix[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char inplay_matrix[3][3];


int main()
{
       
    while(1)
    {
        system("Color 4F"); 
        char c;
        system("cls");
        printf("************************** WELCOME TO THE SMART TIC-TAC-TOE GAME ************************\n\n");
        printf("\n #### GAME INFORMATION ####\n1.The game is played on a three by three board. Each player has a marker.\n2.One player has an 'X', the other an 'O'. Players get alternate turns to place their marker on the board.\n3.The first player to get three in a row either diagonally, horizontally, or vertically, wins the games.\n4.In the event all squares are taken on the board without a winner then it is a tie.");
        printf("\n5.You will be having three options to selct from for playing the game.\n  a) Play with Smart Computer - In this mode computer will be the other player.\n  b) Play with Evil Computer - In this mode again the computer will be the other player but it will not allow you to WIN the game. It's worth a TRY though :)\n  c) Play with a friend - In this mode you can play with your friend.");
        printf("\n6.By default Smart and Evil computer will be assigned as Player two.\n7.Player one will be assigned an 'X' as their marker, player two should be assigned the 'O'.");
        printf("\n\nPLEASE CHOOSE FROM THE BELOW OPTIONS:\n1. WANT TO PLAY WITH THE SMART COMPUTER.\n2. WANT TO PLAY WITH THE EVIL COMPUTER.\n3. WANT TO PLAY WITH OTHER PLAYER.\n4. EXIT\n");
        printf("\nENTER YOUR CHOICE: ");
        fflush(stdin);
        c=getchar();
        
        switch(c)
        {
            case '1':
            play_smartcomputer();
            break;
            case '2':
            play_evilcomputer();
            break;
            case '3':
            play_player();
            break;
            case ('4'):
            exit(0);
            default:
            printf("Invalid Choice - Try again.");
            Sleep(2000);
        }
    }
    return 0;
}

void game_screen(char *p1,char *p2,int M)
{
    
    system("cls");
    system("Color 4F"); 
    printf("##################### TIC-TAC-TOE GAME #######################\n\n\n\n\n");
    printf("Player1- %s :Marking= 'X'\nPlayer2- %s :Marking= 'O'\n\n\n",p1,p2);
    printf("       *       *      \n");
    printf("   %c   *   %c   *   %c  \n",inplay_matrix[0][0],inplay_matrix[0][1],inplay_matrix[0][2]);
    printf("       *       *      \n");
    printf("* * * * * * * * * * * * *\n");
    printf("       *       *      \n");
    printf("   %c   *   %c   *   %c  \n",inplay_matrix[1][0],inplay_matrix[1][1],inplay_matrix[1][2]);
    printf("       *       *      \n");
    printf("* * * * * * * * * * * * *\n");
    printf("       *       *      \n");
    printf("   %c   *   %c   *   %c  \n",inplay_matrix[2][0],inplay_matrix[2][1],inplay_matrix[2][2]);
    printf("       *       *      \n");
    

    if(M==1)
        printf("\nPlayer- %s, Enter Marking Place: ",p1);
    else if(M==2)
        printf("\nPlayer- %s, Enter Marking Place: ",p2);
    else
    {
        printf("\nGET READY!! Player- %s  TO BEGIN THE GAME - PRESS ANY KEY TO CONTINUE",p1);
        getch();
    } 
        

    if((check_win())==1)
    {   
        printf("\n\n\n###########################################################\n\t%s WON!!\n###########################################################\n\n",p1); 
        return;
    }
    
    if((check_win())==2)
    {   
        printf("\n\n\n###########################################################\n\t%s WON\n###########################################################\n\n",p2);
        return; 
    }
    
    if(valid_move()==9)
    {
        printf("\n\n\n###########################################################\n\t GAME DRAW \n###########################################################\n\n");
        return;
    }
    
}

void copy_matrix()
{
    int i,j;
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            inplay_matrix[i][j]=default_matrix[i][j];
}

char player_Move()
{
    char input;
    int i,j;
    fflush(stdin);
    input=getchar();
      
    if(input>='1' && input<='9')
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {    
                if(input==inplay_matrix[i][j])
                {
                    switch(input)
                    {
                        case '1':
                           inplay_matrix[0][0]='X';
                            break;
                        case '2':
                            inplay_matrix[0][1]='X';
                            break;
                        case '3':
                            inplay_matrix[0][2]='X';
                            break;
                        case '4':
                            inplay_matrix[1][0]='X';
                            break;
                        case '5':
                            inplay_matrix[1][1]='X';
                            break;
                        case '6':
                            inplay_matrix[1][2]='X';
                            break;
                        case '7':
                            inplay_matrix[2][0]='X';
                            break;
                        case '8':
                            inplay_matrix[2][1]='X';
                            break;
                        case '9':
                            inplay_matrix[2][2]='X';
                            break;
                        
                    }
                    return input;
                }
                
            }
            
        }
        if(i==3 && j==3)
        {
            printf("\n Invalid input-Try Again: ");
            Sleep(1500);
            return '\0';
        }
            
    }
    else
        printf("INVALID INPUT-TRY AGAIN ");    
}



int check_win()
{
    if(inplay_matrix[0][0]=='X' && inplay_matrix[0][1]=='X' && inplay_matrix[0][2]=='X')
        return 1;
    else if(inplay_matrix[1][0]=='X' && inplay_matrix[1][1]=='X' && inplay_matrix[1][2]=='X')
        return 1;
    else if(inplay_matrix[2][0]=='X' && inplay_matrix[2][1]=='X' && inplay_matrix[2][2]=='X')
        return 1;
    else if(inplay_matrix[0][0]=='X' && inplay_matrix[1][0]=='X' && inplay_matrix[2][0]=='X')
        return 1;
    else if(inplay_matrix[0][1]=='X' && inplay_matrix[1][1]=='X' && inplay_matrix[2][1]=='X')
        return 1;
    else if(inplay_matrix[0][2]=='X' && inplay_matrix[1][2]=='X' && inplay_matrix[2][2]=='X')
        return 1;
    else if(inplay_matrix[0][0]=='X' && inplay_matrix[1][1]=='X' && inplay_matrix[2][2]=='X')
        return 1;
    else if(inplay_matrix[0][2]=='X' && inplay_matrix[1][1]=='X' && inplay_matrix[2][0]=='X')
        return 1;
    else
    {
        if(inplay_matrix[0][0]=='O' && inplay_matrix[0][1]=='O' && inplay_matrix[0][2]=='O')
            return 2;
        else if(inplay_matrix[1][0]=='O' && inplay_matrix[1][1]=='O' && inplay_matrix[1][2]=='O')
            return 2;
        else if(inplay_matrix[2][0]=='O' && inplay_matrix[2][1]=='O' && inplay_matrix[2][2]=='O')
            return 2;
        else if(inplay_matrix[0][0]=='O' && inplay_matrix[1][0]=='O' && inplay_matrix[2][0]=='O')
            return 2;
        else if(inplay_matrix[0][1]=='O' && inplay_matrix[1][1]=='O' && inplay_matrix[2][1]=='O')
            return 2;
        else if(inplay_matrix[0][2]=='O' && inplay_matrix[1][2]=='O' && inplay_matrix[2][2]=='O')
            return 2;
        else if(inplay_matrix[0][0]=='O' && inplay_matrix[1][1]=='O' && inplay_matrix[2][2]=='O')
            return 2;
        else if(inplay_matrix[0][2]=='O' && inplay_matrix[1][1]=='O' && inplay_matrix[2][0]=='O')
            return 2;
    }
}

void smart_computerMove(char p1_pos)
{
    switch(p1_pos)
    {
        case '1':
            if(inplay_matrix[0][1]=='X' && inplay_matrix[0][2]=='3')
                inplay_matrix[0][2]='O';
            else if(inplay_matrix[0][1]=='2' && inplay_matrix[0][2]=='X')
                inplay_matrix[0][1]='O';
            else if(inplay_matrix[1][0]=='X' && inplay_matrix[2][0]=='7')
                inplay_matrix[2][0]='O';
            else if(inplay_matrix[1][0]=='4' && inplay_matrix[2][0]=='X')
                inplay_matrix[1][0]='O';
            else if(inplay_matrix[1][1]=='X' && inplay_matrix[2][2]=='9')
                inplay_matrix[2][2]='O';
            else if(inplay_matrix[1][1]=='5' && inplay_matrix[2][2]=='X')
                inplay_matrix[1][1]='O';
            else
            {
                if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';
            }
            break;
        case '2':

            if(inplay_matrix[0][0]=='X' && inplay_matrix[0][2]=='3')
                inplay_matrix[0][2]='O';
            else if(inplay_matrix[0][0]=='1' && inplay_matrix[0][2]=='X')
                inplay_matrix[0][0]='O';
            else if(inplay_matrix[1][1]=='X' && inplay_matrix[2][1]=='8')
                inplay_matrix[2][1]='O';
            else if(inplay_matrix[1][1]=='5' && inplay_matrix[2][1]=='X')
                inplay_matrix[1][1]='O';
            else
            {
                if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';                    
            }
            break;
        case '3':
            
            if(inplay_matrix[0][1]=='X' && inplay_matrix[0][0]=='1')
                inplay_matrix[0][0]='O';
            else if(inplay_matrix[0][1]=='2' && inplay_matrix[0][0]=='X')
                inplay_matrix[0][1]='O';
            else if(inplay_matrix[1][2]=='X' && inplay_matrix[2][2]=='9')
                inplay_matrix[2][2]='O';
            else if(inplay_matrix[1][2]=='6' && inplay_matrix[2][2]=='X')
                inplay_matrix[1][2]='O';
            else if(inplay_matrix[1][1]=='X' && inplay_matrix[2][0]=='7')
                inplay_matrix[2][0]='O';
            else if(inplay_matrix[1][1]=='5' && inplay_matrix[2][0]=='X')
                inplay_matrix[1][1]='O';
            else
            {
                if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
            }
            break;
        case '4':
            
            if(inplay_matrix[0][0]=='X' && inplay_matrix[2][0]=='7')
                inplay_matrix[2][0]='O';
            else if(inplay_matrix[0][0]=='1' && inplay_matrix[2][0]=='X')
                inplay_matrix[0][0]='O';
            else if(inplay_matrix[1][1]=='X' && inplay_matrix[1][2]=='6')
                inplay_matrix[1][2]='O';
            else if(inplay_matrix[1][1]=='5' && inplay_matrix[1][2]=='X')
                inplay_matrix[1][1]='O';
            else
            {
                if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';                    
            }
            break;
        
        case '5':
            
            if(inplay_matrix[0][1]=='X' && inplay_matrix[2][1]=='8')
                inplay_matrix[2][1]='O';
            else if(inplay_matrix[0][1]=='2' && inplay_matrix[2][1]=='X')
                inplay_matrix[0][1]='O';
            else if(inplay_matrix[1][2]=='X' && inplay_matrix[1][0]=='4')
                inplay_matrix[1][0]='O';
            else if(inplay_matrix[1][2]=='6' && inplay_matrix[1][0]=='X')
                inplay_matrix[1][2]='O';
            else if(inplay_matrix[0][0]=='X' && inplay_matrix[2][2]=='9')
                inplay_matrix[2][2]='O';
            else if(inplay_matrix[0][0]=='1' && inplay_matrix[2][2]=='X')
                inplay_matrix[0][0]='O';
            else if(inplay_matrix[0][2]=='X' && inplay_matrix[2][0]=='7')
                inplay_matrix[2][0]='O';
            else if(inplay_matrix[0][2]=='3' && inplay_matrix[2][0]=='X')
                inplay_matrix[0][2]='O';    
            else
            {
                if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';             
            }
            
            break;
        
        case '6':
            
            if(inplay_matrix[0][2]=='X' && inplay_matrix[2][2]=='9')
                inplay_matrix[2][2]='O';
            else if(inplay_matrix[0][2]=='3' && inplay_matrix[2][2]=='X')
                inplay_matrix[0][2]='O';
            else if(inplay_matrix[1][1]=='X' && inplay_matrix[1][0]=='4')
                inplay_matrix[1][0]='O';
            else if(inplay_matrix[1][1]=='5' && inplay_matrix[1][0]=='X')
                inplay_matrix[1][1]='O';
            else
            {
                if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
            }
            break;
            
        
        case '7':
            
            if(inplay_matrix[0][0]=='X' && inplay_matrix[1][0]=='4')
                inplay_matrix[1][0]='O';
            else if(inplay_matrix[0][0]=='1' && inplay_matrix[1][0]=='X')
                inplay_matrix[0][0]='O';
            else if(inplay_matrix[2][1]=='X' && inplay_matrix[2][2]=='9')
                inplay_matrix[2][2]='O';
            else if(inplay_matrix[2][1]=='8' && inplay_matrix[2][2]=='X')
                inplay_matrix[2][1]='O';
            else if(inplay_matrix[1][1]=='X' && inplay_matrix[0][2]=='3')
                inplay_matrix[0][2]='O';
            else if(inplay_matrix[1][1]=='5' && inplay_matrix[0][2]=='X')
                inplay_matrix[1][1]='O';
            else
            {
                if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
            }
            break;
        
        case '8':
            
            if(inplay_matrix[2][0]=='X' && inplay_matrix[2][2]=='9')
                inplay_matrix[2][2]='O';
            else if(inplay_matrix[2][0]=='7' && inplay_matrix[2][2]=='X')
                inplay_matrix[2][0]='O';
            else if(inplay_matrix[1][1]=='X' && inplay_matrix[0][1]=='2')
                inplay_matrix[0][1]='O';
            else if(inplay_matrix[1][1]=='5' && inplay_matrix[0][1]=='X')
                inplay_matrix[1][1]='O';
            else
            {
                if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
            }
            break;
        
        case '9':
            
            if(inplay_matrix[1][1]=='X' && inplay_matrix[0][0]=='1')
                inplay_matrix[0][0]='O';
            else if(inplay_matrix[1][1]=='5' && inplay_matrix[0][0]=='X')
                inplay_matrix[1][1]='O';
            else if(inplay_matrix[1][2]=='X' && inplay_matrix[0][2]=='3')
                inplay_matrix[0][2]='O';
            else if(inplay_matrix[1][2]=='6' && inplay_matrix[0][2]=='X')
                inplay_matrix[1][2]='O';
            else if(inplay_matrix[2][1]=='X' && inplay_matrix[2][0]=='7')
                inplay_matrix[2][0]='O';
            else if(inplay_matrix[2][1]=='8' && inplay_matrix[2][0]=='X')
                inplay_matrix[2][1]='O';
            else
            {
                if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
            }
            break;
    }
            
}

void evil_computerMove(char p1_pos)
{
    int flag=0;
    switch(p1_pos)
    {
        case '1':
            if(inplay_matrix[0][1]=='X' && inplay_matrix[0][2]=='3')
            {   
                inplay_matrix[0][2]='O';
                flag+=1;
            }
            if(inplay_matrix[0][1]=='2' && inplay_matrix[0][2]=='X')
            {
               inplay_matrix[0][1]='O'; 
               flag+=1; 
            }
                
            if(inplay_matrix[1][0]=='X' && inplay_matrix[2][0]=='7')
            {
                inplay_matrix[2][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][0]=='4' && inplay_matrix[2][0]=='X')
            {
                inplay_matrix[1][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='X' && inplay_matrix[2][2]=='9')
            {
                inplay_matrix[2][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='5' && inplay_matrix[2][2]=='X')
            {
                inplay_matrix[1][1]='O';
                flag+=1;
            }
                
            if(flag>0)
                break;
            else
            {
                if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';
            }
            break;
        case '2':

            if(inplay_matrix[0][0]=='X' && inplay_matrix[0][2]=='3')
            {
                inplay_matrix[0][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[0][0]=='1' && inplay_matrix[0][2]=='X')
            {
                inplay_matrix[0][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='X' && inplay_matrix[2][1]=='8')
            {
                inplay_matrix[2][1]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='5' && inplay_matrix[2][1]=='X')
            {
                inplay_matrix[1][1]='O';
                flag+=1;
            }
            if(flag>0)
                break;    
            else
            {
                if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';                    
            }
            break;
        case '3':
            
            if(inplay_matrix[0][1]=='X' && inplay_matrix[0][0]=='1')
            {
                inplay_matrix[0][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[0][1]=='2' && inplay_matrix[0][0]=='X')
            {
                inplay_matrix[0][1]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][2]=='X' && inplay_matrix[2][2]=='9')
            {
                inplay_matrix[2][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][2]=='6' && inplay_matrix[2][2]=='X')
            {
                inplay_matrix[1][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='X' && inplay_matrix[2][0]=='7')
            {
                inplay_matrix[2][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='5' && inplay_matrix[2][0]=='X')
            {
                inplay_matrix[1][1]='O';
                flag+=1;
            }
            if(flag>0)
                break;    
           else
            {
                if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
            }
            break;
        case '4':
            
            if(inplay_matrix[0][0]=='X' && inplay_matrix[2][0]=='7')
            {
                inplay_matrix[2][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[0][0]=='1' && inplay_matrix[2][0]=='X')
            {
                inplay_matrix[0][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='X' && inplay_matrix[1][2]=='6')
            {
                inplay_matrix[1][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='5' && inplay_matrix[1][2]=='X')
            {
                inplay_matrix[1][1]='O';
                flag+=1;
            }
            if(flag>0)
                break;    
            else
            {
                if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';                    
            }
            break;
        
        case '5':
            
            if(inplay_matrix[0][1]=='X' && inplay_matrix[2][1]=='8')
            {
                inplay_matrix[2][1]='O';
                flag+=1;
            }
                
            if(inplay_matrix[0][1]=='2' && inplay_matrix[2][1]=='X')
            {
                inplay_matrix[0][1]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][2]=='X' && inplay_matrix[1][0]=='4')
            {
                inplay_matrix[1][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][2]=='6' && inplay_matrix[1][0]=='X')
            {
                inplay_matrix[1][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[0][0]=='X' && inplay_matrix[2][2]=='9')
            {
                inplay_matrix[2][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[0][0]=='1' && inplay_matrix[2][2]=='X')
            {
                inplay_matrix[0][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[0][2]=='X' && inplay_matrix[2][0]=='7')
            {
                inplay_matrix[2][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[0][2]=='3' && inplay_matrix[2][0]=='X')
            {
                inplay_matrix[0][2]='O';
                flag+=1;
            }
            if(flag>0)
                break;        
            else
            {
                if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';             
            }
            
            break;
        
        case '6':
            
            if(inplay_matrix[0][2]=='X' && inplay_matrix[2][2]=='9')
            {
                inplay_matrix[2][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[0][2]=='3' && inplay_matrix[2][2]=='X')
            {
                inplay_matrix[0][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='X' && inplay_matrix[1][0]=='4')
            {
                inplay_matrix[1][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='5' && inplay_matrix[1][0]=='X')
            {
                inplay_matrix[1][1]='O';
                flag+=1;
            }
            if(flag>0)
                break;    
            else
            {
                if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
            }
            break;
            
        case '7':
            
            if(inplay_matrix[0][0]=='X' && inplay_matrix[1][0]=='4')
            {
                inplay_matrix[1][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[0][0]=='1' && inplay_matrix[1][0]=='X')
            {
                inplay_matrix[0][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[2][1]=='X' && inplay_matrix[2][2]=='9')
            {
                inplay_matrix[2][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[2][1]=='8' && inplay_matrix[2][2]=='X')
            {
                inplay_matrix[2][1]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='X' && inplay_matrix[0][2]=='3')
            {
                inplay_matrix[0][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='5' && inplay_matrix[0][2]=='X')
            {
                inplay_matrix[1][1]='O';
                flag+=1;
            }
            if(flag>0)
                break;     
            else
            {
                if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
            }
            break;
        
        case '8':
            
            if(inplay_matrix[2][0]=='X' && inplay_matrix[2][2]=='9')
            {
                inplay_matrix[2][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[2][0]=='7' && inplay_matrix[2][2]=='X')
            {
                inplay_matrix[2][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='X' && inplay_matrix[0][1]=='2')
            {
                inplay_matrix[0][1]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='5' && inplay_matrix[0][1]=='X')
            {
                inplay_matrix[1][1]='O';
                flag+=1;
            }
            if(flag>0)
                break;     
            else
            {
                if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][2]=='9')
                    inplay_matrix[2][2]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
                else if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
            }
            break;
        
        case '9':
            
            if(inplay_matrix[1][1]=='X' && inplay_matrix[0][0]=='1')
            {
                inplay_matrix[0][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][1]=='5' && inplay_matrix[0][0]=='X')
            {
                inplay_matrix[1][1]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][2]=='X' && inplay_matrix[0][2]=='3')
            {
                inplay_matrix[0][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[1][2]=='6' && inplay_matrix[0][2]=='X')
            {
                inplay_matrix[1][2]='O';
                flag+=1;
            }
                
            if(inplay_matrix[2][1]=='X' && inplay_matrix[2][0]=='7')
            {
                inplay_matrix[2][0]='O';
                flag+=1;
            }
                
            if(inplay_matrix[2][1]=='8' && inplay_matrix[2][0]=='X')
            {
                inplay_matrix[2][1]='O';
                flag+=1;
            }
            if(flag>0)
                break;      
            else
            {
                if(inplay_matrix[1][2]=='6')
                    inplay_matrix[1][2]='O';
                else if(inplay_matrix[1][1]=='5')
                    inplay_matrix[1][1]='O';
                else if(inplay_matrix[2][1]=='8')
                    inplay_matrix[2][1]='O';
                else if(inplay_matrix[0][2]=='3')
                    inplay_matrix[0][2]='O';
                else if(inplay_matrix[0][0]=='1')
                    inplay_matrix[0][0]='O';
                else if(inplay_matrix[2][0]=='7')
                    inplay_matrix[2][0]='O';
                else if(inplay_matrix[0][1]=='2')
                    inplay_matrix[0][1]='O';
                else if(inplay_matrix[1][0]=='4')
                    inplay_matrix[1][0]='O';
            }
            break;
    }
            
}

int valid_move()
{
    int i,j,c=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(inplay_matrix[i][j]=='X' || inplay_matrix[i][j]=='O')
                c+=1;
    return c;
}



void p1_play_player()
{
    char input;
    int i,j;
    

    while((valid_move())!= 9 && check_win()!=1 && check_win()!=2)
    {
        
        fflush(stdin);
        input=getchar();
        if(input>='1' && input<='9')
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {    
                    if(input==inplay_matrix[i][j])
                    {
                        switch(input)
                        {
                            case '1':
                                inplay_matrix[0][0]='X';
                                break;
                            case '2':
                                inplay_matrix[0][1]='X';
                                break;
                            case '3':
                                inplay_matrix[0][2]='X';
                                break;
                            case '4':
                                inplay_matrix[1][0]='X';
                                break;
                            case '5':
                                inplay_matrix[1][1]='X';
                                break;
                            case '6':
                                inplay_matrix[1][2]='X';
                                break;
                            case '7':
                                inplay_matrix[2][0]='X';
                                break;
                            case '8':
                                inplay_matrix[2][1]='X';
                                break;
                            case '9':
                                inplay_matrix[2][2]='X';
                                break;
                    
                        }
                        return;
                    }
                    
                }
                if(i==2 && j==3)
                {
                    printf(" Enter Valid position number\r");
                    Sleep(1500);
                    printf("                                   \r");
                }
                    
            }
             
        }
        else
        printf("INVALID INPUT");
    }
       
}

void p2_play_player()
{
    char input;
    int i,j;
    

    while((valid_move())!= 9 && check_win()!=1 && check_win()!=2)
    {
        fflush(stdin);
        input=getchar();
        if(input>='1' && input<='9')
        {
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {    
                    if(input==inplay_matrix[i][j])
                    {
                        switch(input)
                        {
                            case '1':
                                inplay_matrix[0][0]='O';
                                break;
                            case '2':
                                inplay_matrix[0][1]='O';
                                break;
                            case '3':
                                inplay_matrix[0][2]='O';
                                break;
                            case '4':
                                inplay_matrix[1][0]='O';
                                break;
                            case '5':
                                inplay_matrix[1][1]='O';
                                break;
                            case '6':
                                inplay_matrix[1][2]='O';
                                break;
                            case '7':
                                inplay_matrix[2][0]='O';
                                break;
                            case '8':
                                inplay_matrix[2][1]='O';
                                break;
                            case '9':
                                inplay_matrix[2][2]='O';
                                break;
                    
                        }
                        return;
                    }
                    
                }
                if(i==2 && j==3)
                {
                    printf(" Enter Valid Position Number\r");
                    Sleep(1500);
                    printf("                                   \r");
                }
            }
             
        }
        else
        printf("INVALID INPUT");
    }
}

void play_smartcomputer()
{
    char pos;
    system("cls");
    system("Color 4F"); 
    char ply_1[25];
    char ply_2[25]="Smart Computer";
    printf("ENTER THE PLAYER NAME: ");
    fflush(stdin);
    gets(ply_1);
    system("cls");
    copy_matrix();
    game_screen(ply_1,ply_2,1);

    while((valid_move())!= 9 && check_win()!=1 && check_win()!=2)
    {
        pos=player_Move();
        game_screen(ply_1,ply_2,1);
        
        smart_computerMove(pos);
        game_screen(ply_1,ply_2,1);
   
    }
    getch();
}

void play_evilcomputer()
{
    char pos;
    system("cls");
    system("Color 4F"); 
    char ply_1[25];
    char ply_2[25]="Evil Computer";
    printf("ENTER THE PLAYER NAME: ");
    fflush(stdin);
    gets(ply_1);
    system("cls");
    copy_matrix();
    game_screen(ply_1,ply_2,1);

    while((valid_move())!= 9 && check_win()!=1 && check_win()!=2)
    {
        pos=player_Move();
        game_screen(ply_1,ply_2,1);
        
        evil_computerMove(pos);
        game_screen(ply_1,ply_2,1);
   
    }
    getch();
}

void play_player()
{
    char pos;
    system("cls");
    system("Color 4F"); 
    char ply_1[25];
    char ply_2[25];
    printf("ENTER THE PLAYER-1 NAME: ");
    fflush(stdin);
    gets(ply_1);
    printf("ENTER THE PLAYER-2 NAME: ");
    fflush(stdin);
    gets(ply_2);

    system("cls");
    copy_matrix();
    game_screen(ply_1,ply_2,0);
    game_screen(ply_1,ply_2,1);
    while((valid_move())!= 9 && check_win()!=1 && check_win()!=2)
    {
        
        p1_play_player(ply_1,ply_2);
        game_screen(ply_1,ply_2,2);
        p2_play_player(ply_1,ply_2);
        game_screen(ply_1,ply_2,1);
   
    }
    getch();
}