#include<stdio.h>
#include<windows.foundation.h>
#include<stdlib.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
void display();
void play1();
void play2();
void play3();
void check(char);
void check3(char);
int checkwin();
char player[25],player1[25],player2[25];
int main()
{
    int choice,i;
    printf("            ***************************************************************************************\n");
    Sleep(350);
    printf("            ***************************************************************************************\n");
    Sleep(350);
    printf("            ************************************ W E L C O M E ************************************\n");
    Sleep(350);
    printf("            ************************************ T O   P L A Y ************************************\n");
    Sleep(350);
    printf("            ************************************* TIC TAC TOE *************************************\n");
    Sleep(350);
    printf("            ***************************************************************************************\n");
    Sleep(350);
    printf("            ***************************************************************************************\n");
    Sleep(2000);
    printf(" \a           ________________________________________________________________________________________\n");
    printf("                                 1. WANT TO PLAY WITH SMART COMPUTER\n");
    printf("                                 2. WANT TO PLAY WITH EVIL COMPUTER\n");
    printf("                                 3. WANT TO PLAY WITH PLAYER\n");
    printf("                                 4. EXIT THE GAME\n");
    printf("            ________________________________________________________________________________________\a\n");
    Sleep(900);
    printf("                                        ENTER YOUR CHOICE    ");
    scanf("%d",&choice);
    system("CLS");
    if(choice==1)
    {
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("\n");
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("\n");printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("\n");
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("###");
        Sleep(100);
        printf("\n");
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("###");
        Sleep(100);
        printf("\n");printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("###");
        Sleep(100);
        printf("\n");
        printf("\n");
        printf("\n   PLAY WITH SMART COMPUTER\n");
        printf("   ENTER YOUR NAME : ");
        scanf("%s",&player);
        Sleep(300);
        system("CLS");
        Sleep(500);
        printf("\n\n\n\n\n\n\n\n\n\n\n\                          ===>>");
        Sleep(500);
        printf(" ===>>");
        Sleep(500);
        printf(" ===>>");
        Sleep(800);
        printf("  YOUR");
        Sleep(800);
        printf("   GAME");
        Sleep(800);
        printf("   IS");
        Sleep(800);
        printf("   LOADING  ");
        Sleep(800);
        printf("   ===>>");
        Sleep(500);
        printf("   ===>>");
        Sleep(500);
        printf("   ===>>");
        Sleep(500);
  	}
  	else if(choice==2)
    {
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("\n");
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("\n");printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("\n");
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("###");
        Sleep(100);
        printf("\n");
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("###");
        Sleep(100);
        printf("\n");printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("###");
        Sleep(100);
        printf("\n");
        Sleep(100);
        printf("PLAY WITH EVIL COMPUTER\n");
        printf("ENTER YOUR NAME : \n");
        scanf("%s",&player);
        Sleep(300);
        system("CLS");
        Sleep(100);
        printf("\n\n\n\n\n\n\n\n\n\n\n\                          ===>>");
        Sleep(1000);
        printf(" ===>>");
        Sleep(1000);
        printf(" ===>>");
        Sleep(1000);
        printf("  YOUR");
        printf("   GAME");
        Sleep(1000);
        printf("   IS");
        Sleep(1000);
        printf("   LOADING  ");
        Sleep(800);
        printf("   ===>>");
        Sleep(500);
        printf("   ===>>");
        Sleep(500);
        printf("   ===>>");
        Sleep(500);
    }
    else if(choice==3)
    {
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("\n");
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("\n");printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("***");
        Sleep(100);
        printf("\n");
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("###");
        Sleep(100);
        printf("\n");
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("###");
        Sleep(100);
        printf("\n");printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("######");
        Sleep(100);
        printf("###");
        Sleep(100);
        printf("\n");
        Sleep(100);
        printf("PLAY WITH YOUR FRIENDS\n");
        printf("ENTER FIRST PLAYER NAME :  \n");
        scanf("%s",&player1);
        Sleep(100);
        fflush(stdin);
        printf("ENTER SECOND PLAYER NAME :  \n");
        scanf("%s",&player2);
        Sleep(300);
        system("CLS");
        Sleep(500);
        printf("\n\n\n\n\n\n\n\n\n\n\n\                          ===>>");
        Sleep(500);
        printf(" ===>>");
        Sleep(500);
        printf(" ===>>");
        Sleep(800);
        printf("  YOUR");
        printf("   GAME");
        Sleep(800);
        printf("   IS");
        Sleep(800);
        printf("   LOADING  ");
        Sleep(800);
        printf("   ===>>");
        Sleep(500);
        printf("   ===>>");
        Sleep(500);
        printf("   ===>>");
        Sleep(500);
    }
    else if(choice==4)
    {
        printf("COME NEXT TIME TO PLAY TIC TAC TOE");
        exit(1);
    }
    else
    {
        printf("INVALID CHOICE");
        exit(1);
    }
    if(choice==1)
        play1();
    else if(choice==2)
        play2();
    else if(choice==3)
        play3();
    else
        printf("enjoyed");
        Sleep(900);
        system("CLS");
        printf("\n\n\n\n\n\n\n\n\n\n********************************************* YOUR GAME IS OVER *********************************************");
        return 0;
}
void display()
{
    system("CLS");
	printf("#######################################********** TIC TAC TOE **********######################################\n");
	printf("FIRST PLAYER ==> X  \nSECOND PLAYER ==> O \n\n\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n",a[0],a[1],a[2]);
	printf("___|___|___\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n",a[3],a[4],a[5]);
	printf("___|___|___\n");
	printf("   |   |   \n");
	printf(" %c | %c | %c \n",a[6],a[7],a[8]);
	printf("   |   |   \n");
}
void play1()
{
    int i,turn,p=1,win;
    char mark;
    do
    {
       i=(p%2)?1:2;
       mark=(i==1)?'X':'O';
       display();
       if(i==1)
       {
           printf("%s YOUR TURN  :  \n",strupr(player));
           scanf("%d",&turn);
           if(turn==1&&a[0]=='1')
            a[0]=mark;
           else if(turn==2&&a[1]=='2')
            a[1]=mark;
           else if(turn==3&&a[2]=='3')
            a[2]=mark;
           else if(turn==4&&a[3]=='4')
            a[3]=mark;
           else if(turn==5&&a[4]=='5')
            a[4]=mark;
           else if(turn==6&&a[5]=='6')
            a[5]=mark;
           else if(turn==7&&a[6]=='7')
            a[6]=mark;
           else if(turn==8&&a[7]=='8')
            a[7]=mark;
           else if(turn==9&&a[8]=='9')
            a[8]=mark;
            else
            {
            printf("INVALID NUMBER PRESSED");
            i--;
            }
       }
       else
       {
            check(mark);
        }
        win=checkwin();
        p++;
    }while(win==3);
    display();
    if(win==1&&i==1)
    printf("CONGRATULATION\n%s WIN THE GAME",player);
    else if(win==1)
        printf("CONGRATULATION\n SMART COMPUTER WIN THE GAME");
    else
        printf("GAME DRAW");
}
void play2()
{
    int i,turn,p=1,win;
    char mark;
    do
    {
       i=(p%2)?1:2;
       mark=(i==1)?'X':'O';
       display();
       if(i==1)
       {
           printf("%s YOUR TURN  :  \n",strupr(player));
           scanf("%d",&turn);
           if(turn==1&&a[0]=='1')
            a[0]=mark;
           else if(turn==2&&a[1]=='2')
            a[1]=mark;
           else if(turn==3&&a[2]=='3')
            a[2]=mark;
           else if(turn==4&&a[3]=='4')
            a[3]=mark;
           else if(turn==5&&a[4]=='5')
            a[4]=mark;
           else if(turn==6&&a[5]=='6')
            a[5]=mark;
           else if(turn==7&&a[6]=='7')
            a[6]=mark;
           else if(turn==8&&a[7]=='8')
            a[7]=mark;
           else if(turn==9&&a[8]=='9')
            a[8]=mark;
            else
            {
            printf("INVALID NUMBER PRESSED");
            i--;
            }
       }
       else
       {
           if(a[0]=='1')
            a[0]=mark;
            else if(a[0]==a[1]&&a[2]=='3')
            {
                a[2]=mark;
                check3(mark);
            }
            else if(a[2]==a[4]&&a[6]=='7')
            {
                a[6]=mark;
                check3(mark);
            }
            else if(a[0]==a[3]&&a[6]=='7')
            {
                a[6]=mark;
                check3(mark);
            }
            else if(a[1]==a[7]&&a[4]=='5')
            {
                a[4]=mark;
                check3(mark);
            }
            else if(a[0]==a[4]&&a[8]=='9')
            {
                a[8]=mark;
                check3(mark);
            }
            else if(a[0]==a[2]&&a[1]=='2')
            {
                a[1]=mark;
                check3(mark);
            }
            else if(a[0]==a[6]&&a[3]=='4')
            {
                a[3]=mark;
                check3(mark);
            }
            else if(a[0]==a[8]&&a[4]=='5')
            {
                a[4]=mark;
                check3(mark);
            }
            else if(a[1]==a[2]&&a[0]=='1')
             {
                 a[0]=mark;
                check3(mark);
             }
            else if(a[1]==a[4]&&a[7]=='8')
            {
                a[7]=mark;
                check3(mark);
            }
            else if(a[2]==a[5]&&a[8]=='9')
            {
                a[8]=mark;
                check3(mark);
            }
            else if(a[2]==a[6]&&a[4]=='5')
            {
                a[4]=mark;
                check3(mark);
            }
            else if(a[2]==a[8]&&a[5]=='6')
            {
                a[5]=mark;
                check3(mark);
            }
            else if(a[3]==a[6]&&a[0]=='1')
            {
                a[0]=mark;
                check3(mark);
            }
            else if(a[3]==a[4]&&a[5]=='6')
            {
                a[5]=mark;
                check3(mark);
            }
            else if(a[3]==a[5]&&a[4]=='5')
            {
                a[4]=mark;
                check3(mark);
            }
            else if(a[4]==a[6]&&a[2]=='3')
            {
                a[2]=mark;
                check3(mark);
            }
            else if(a[4]==a[7]&&a[1]=='2')
            {
                a[1]=mark;
                check3(mark);
            }
            else if(a[4]==a[5]&&a[3]=='4')
            {
                a[3]=mark;
                check3(mark);
            }
            else if(a[4]==a[8]&&a[0]=='1')
            {
                a[0]=mark;
                check3(mark);
            }
            else if(a[5]==a[8]&&a[2]=='3')
            {
                a[2]=mark;
                check3(mark);
            }
            else if(a[6]==a[7]&&a[8]=='9')
            {
                a[8]=mark;
                check3(mark);
            }
            else if(a[7]==a[8]&&a[6]=='7')
            {
                a[6]=mark;
                check3(mark);
            }
            else if(a[6]==a[8]&&a[7]=='8')
            {
                a[7]=mark;
                check(mark);
            }
            else if(a[3]=='4')
                a[3]=mark;
            else
                a[4]=mark;

        }
        win=checkwin();
        p++;
    }while(win==3);
    display();
    if(win==1&&i==1)
    printf("CONGRATULATION\n%s WIN THE GAME",player);
    else if(win==1)
        printf("CONGRATULATION\n EVIL COMPUTER WIN THE GAME");
    else
        printf("GAME DRAW");
}
void play3()
{
    int i,turn,p=1,win;
    char mark;
    do
    {
        i=p%2?1:2;
        mark=(i==1)?'X':'O';
        if(p%2==1)
        {
        display();
        printf("%s YOUR TURN  :  \n",strupr(player1));
        scanf("%d",&turn);
        if(turn==1&&a[0]=='1')
        a[0]=mark;
        else if(turn==2&&a[1]=='2')
        a[1]=mark;
        else if(turn==3&&a[2]=='3')
        a[2]=mark;
        else if(turn==4&&a[3]=='4')
        a[3]=mark;
        else if(turn==5&&a[4]=='5')
        a[4]=mark;
        else if(turn==6&&a[5]=='6')
        a[5]=mark;
        else if(turn==7&&a[6]=='7')
        a[6]=mark;
        else if(turn==8&&a[7]=='8')
        a[7]=mark;
        else if(turn==9&&a[8]=='9')
        a[8]=mark;
        else
        {
           printf("Invalid turn try again");
           --p;
        }
        }
        else
        {
        display();
        printf("%s YOUR TURN  :  \n",strupr(player2));
        scanf("%d",&turn);
        if(turn==1&&a[0]=='1')
        a[0]=mark;
        else if(turn==2&&a[1]=='2')
        a[1]=mark;
        else if(turn==3&&a[2]=='3')
        a[2]=mark;
        else if(turn==4&&a[3]=='4')
        a[3]=mark;
        else if(turn==5&&a[4]=='5')
        a[4]=mark;
        else if(turn==6&&a[5]=='6')
        a[5]=mark;
        else if(turn==7&&a[6]=='7')
        a[6]=mark;
        else if(turn==8&&a[7]=='8')
        a[7]=mark;
        else if(turn==9&&a[8]=='9')
        a[8]=mark;
        else
        {
           printf("Invalid turn try again");
           --p;
        }
        }
        win=checkwin();
        p++;
    }while(win==3);
    display();
    if(win==1&&i==1)
    printf("CONGRATULATION\n%s WIN THE GAME",strupr(player1));
    else if(win==1&&i==0)
    printf("CONGRATULATION\n%s WIN THE GAME",strupr(player2));
    else
        printf("GAME DRAW");
}
void check(char mark)
{
           if(a[0]=='1')
                a[0]=mark;
            else if(a[0]==a[1]&&a[2]=='3')
                a[2]=mark;
            else if(a[2]==a[4]&&a[6]=='7')
                a[6]=mark;
            else if(a[0]==a[3]&&a[6]=='7')
                a[6]==mark;
            else if(a[1]==a[7]&&a[4]=='5')
                a[4]=mark;
            else if(a[0]==a[4]&&a[8]=='9')
                a[8]=mark;
            else if(a[0]==a[2]&&a[1]=='2')
                a[1]=mark;
            else if(a[0]==a[6]&&a[3]=='4')
                a[3]=mark;
            else if(a[0]==a[8]&&a[4]=='5')
                a[4]=mark;
            else if(a[1]==a[2]&&a[0]=='1')
                a[0]=mark;
            else if(a[1]==a[4]&&a[7]=='8')
                a[7]=mark;
            else if(a[2]==a[5]&&a[8]=='9')
                a[8]=mark;
            else if(a[2]==a[6]&&a[4]=='5')
                a[4]=mark;
            else if(a[2]==a[8]&&a[5]=='6')
                a[5]=mark;
            else if(a[3]==a[6]&&a[0]=='1')
                a[0]=mark;
            else if(a[3]==a[4]&&a[5]=='6')
                a[5]=mark;
            else if(a[3]==a[5]&&a[4]=='5')
                a[4]=mark;
            else if(a[4]==a[6]&&a[2]=='3')
                a[2]=mark;
            else if(a[4]==a[7]&&a[1]=='2')
                a[1]=mark;
            else if(a[4]==a[5]&&a[3]=='4')
                a[3]=mark;
            else if(a[4]==a[8]&&a[0]=='1')
                a[0]=mark;
            else if(a[5]==a[8]&&a[2]=='3')
                a[2]=mark;
            else if(a[6]==a[7]&&a[8]=='9')
                a[8]=mark;
            else if(a[7]==a[8]&&a[6]=='7')
                a[6]=mark;
            else if(a[6]==a[8]&&a[7]=='8')
                a[7]=mark;
            else if(a[3]=='4')
                a[3]=mark;
            else if(a[4]=='5')
                a[4]=mark;
            else
                a[6]=mark;
}
int checkwin()
{
    if(a[0]==a[1]&&a[1]==a[2])
        return 1;
    else if(a[3]==a[4]&&a[4]==a[5])
        return 1;
    else if(a[6]==a[7]&&a[7]==a[8])
        return 1;
    else if(a[0]==a[3]&&a[3]==a[6])
        return 1;
    else if(a[1]==a[4]&&a[4]==a[7])
        return 1;
    else if(a[2]==a[5]&&a[5]==a[8])
        return 1;
    else if(a[0]==a[4]&&a[4]==a[8])
        return 1;
    else if(a[2]==a[4]&&a[4]==a[6])
        return 1;
    else if(a[0]!='1'&&a[1]!='2'&&a[2]!='3'&&a[3]!='4'&&a[4]!='5'&&a[5]!='6'&&a[6]!='7'&&a[7]!='8'&&a[8]!='9')
        return 0;
    else
        return 3;
}
void check3(char mark)
{
            if(a[0]=='X'&&a[1]=='X'&&a[2]=='3')
                a[2]=mark;
            else if(a[2]=='X'&&a[4]=='X'&&a[6]=='7')
                a[6]=mark;
            else if(a[0]=='X'&&a[3]=='X'&&a[6]=='7')
                a[6]==mark;
            else if(a[1]=='X'&&a[7]=='X'&&a[4]=='5')
                a[4]=mark;
            else if(a[0]=='X'&&a[4]=='X'&&a[8]=='9')
                a[8]=mark;
            else if(a[0]=='X'&&a[2]=='X'&&a[1]=='2')
                a[1]=mark;
            else if(a[0]=='X'&&a[6]=='X'&&a[3]=='4')
                a[3]=mark;
            else if(a[0]=='X'&&a[8]=='X'&&a[4]=='5')
                a[4]=mark;
            else if(a[1]=='X'&&a[2]=='X'&&a[0]=='1')
                a[0]=mark;
            else if(a[1]=='X'&&a[4]=='X'&&a[7]=='8')
                a[7]=mark;
            else if(a[2]=='X'&&a[5]=='X'&&a[8]=='9')
                a[8]=mark;
            else if(a[2]=='X'&&a[6]=='X'&&a[4]=='5')
                a[4]=mark;
            else if(a[2]=='X'&&a[8]=='X'&&a[5]=='6')
                a[5]=mark;
            else if(a[3]=='X'&&a[6]=='X'&&a[0]=='1')
                a[0]=mark;
            else if(a[3]=='X'&&a[4]=='X'&&a[5]=='6')
                a[5]=mark;
            else if(a[3]=='X'&&a[5]=='X'&&a[4]=='5')
                a[4]=mark;
            else if(a[4]=='X'&&a[6]=='X'&&a[2]=='3')
                a[2]=mark;
            else if(a[4]=='X'&&a[7]=='X'&&a[1]=='2')
                a[1]=mark;
            else if(a[4]=='X'&&a[5]=='X'&&a[3]=='4')
                a[3]=mark;
            else if(a[4]=='X'&&a[8]=='X'&&a[0]=='1')
                a[0]=mark;
            else if(a[5]=='X'&&a[8]=='X'&&a[2]=='3')
                a[2]=mark;
            else if(a[6]=='X'&&a[7]=='X'&&a[8]=='9')
                a[8]=mark;
            else if(a[7]=='X'&&a[8]=='X'&&a[6]=='7')
                a[6]=mark;
            else if(a[6]=='X'&&a[8]=='X'&&a[7]=='8')
                a[7]=mark;
}

