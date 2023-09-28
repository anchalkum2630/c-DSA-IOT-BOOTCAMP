#include<iostream>
#include<stdlib.h>
using namespace std;
char box1[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char box2[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
char turn1,turn2;
int num;
char turn,win;
void gameboard1()
{
    cout<<endl<<"T I C ---- T A C ---- T O E ---- G A M E     "<<endl<<endl<<endl;
   	cout<<"          |       |   "<<endl;
	cout<<"       "<<box1[0][0]<<"  |   "<<box1[0][1]<<"   |  "<<box1[0][2]<<endl;
	cout<<"     _____|_______|_____"<<endl;
	cout<<"          |       |     "<<endl;
	cout<<"       "<<box1[1][0]<<"  |   "<<box1[1][1]<<"   |  "<<box1[1][2]<<endl;
	cout<<"     _____|_______|_____"<<endl;
	cout<<"          |       |   "<<endl;
	cout<<"       "<<box1[2][0]<<"  |   "<<box1[2][1]<<"   |  "<<box1[2][2]<<endl;
	cout<<"          |       |   "<<endl<<endl<<endl;
}
void gameboard2()
{
    cout<<endl<<endl<<"Player1 : [ "<<turn1<<" ]      Player2 : [ "<<turn2<<" ]"<<endl<<endl;
		cout<<"          |       |   "<<endl;
	cout<<"       "<<box2[0][0]<<"  |   "<<box2[0][1]<<"   |  "<<box2[0][2]<<endl;
	cout<<"     _____|_______|_____"<<endl;
	cout<<"          |       |     "<<endl;
	cout<<"       "<<box2[1][0]<<"  |   "<<box2[1][1]<<"   |  "<<box2[1][2]<<endl;
	cout<<"     _____|_______|_____"<<endl;
	cout<<"          |       |   "<<endl;
	cout<<"       "<<box2[2][0]<<"  |   "<<box2[2][1]<<"   |  "<<box2[2][2]<<endl;
	cout<<"          |       |   "<<endl<<endl<<endl;
}
int playerturn1()
{
	cout<<"Player 1  : ";
	cin>>turn1;
	if(turn1=='X'||turn1=='O')
	{
		 return 0;   
    }
	else
	{
	    cout<<"Invalid Choice"<<endl<<"Enter between 'X' and 'O'"<<endl;
	    playerturn1();
	}
	return 0;
}
int playerturn2()
{
	cout<<"Player 2  : ";
    cin>>turn2;
    if(turn2=='X'||turn2=='O')
    {
    	 return 0;
    }
     else
     {
         cout<<"Invalid Choice"<<endl<<"Enter between 'X' and 'O'"<<endl;
         playerturn2();
     }
	return 0;
}
int fillbox()
{
	if(num>0&&num<10)
	{
		if(num==1&&box2[0][0]!='X'&&box2[0][0]!='O')
		{
			box2[0][0]=turn;
			return 0;
		}
		else if(num==2&&box2[0][1]!='X'&&box2[0][1]!='O')
		{
			box2[0][1]=turn;
			return 0;
		}
		else if(num==3&&box2[0][2]!='X'&&box2[0][2]!='O')
		{
			box2[0][2]=turn;
			return 0;
		}
		else if(num==4&&box2[1][0]!='X'&&box2[1][0]!='O')
		{
			box2[1][0]=turn;
			return 0;
		}
		else if(num==5&&box2[1][1]!='X'&&box2[1][1]!='O')
		{
			box2[1][1]=turn;
			return 0;
		}
		else if(num==6&&box2[1][2]!='X'&&box2[1][2]!='O')
		{
			box2[1][2]=turn;
			return 0;
		}
		else if(num==7&&box2[2][0]!='X'&&box2[2][0]!='O')
		{
			box2[2][0]=turn;
			return 0;
		}
		else if(num==8&&box2[2][1]!='X'&&box2[2][1]!='O')
		{
			box2[2][1]=turn;
			return 0;
		}
		else if(num==9&&box2[2][2]!='X'&&box2[2][2]!='O')
		{
			box2[2][2]=turn;
			return 0;
		}
		else{
			cout<<"Cell is filled"<<endl;
			cout<<"Enter another number : ";
			cin>>num;
			fillbox();
		}
	}
		else{
			cout<<"Invalid number enter between 1 to 9"<<endl;
			cout<<"Enter valid number : ";
			cin>>num;
			fillbox();
		}
		return 0;
	}
int checkwin()
{
	for(int i=0;i<3;i++)
	{
		if(box2[0][i]==box2[1][i]&&box2[1][i]==box2[2][i])
		{
			win=box2[0][i];
			return 0;
		}
	}
	for(int j=0;j<3;j++)
	{
        if(box2[j][0]==box2[j][1]&&box2[j][1]==box2[j][2])
		{
			win=box2[j][0];
			return 0;
		}
	}
		
		if(box2[0][0]==box2[1][1]&&box2[1][1]==box2[2][2])
		{
			win=box2[0][0];
			return 0;
		}
		else if(box2[0][2]==box2[1][1]&&box2[1][1]==box2[2][0])
		{
			win=box2[0][2];
			return 0;
		}
		else
		{
			win='0';
		}
		return 0;
}

int play()
{
	for(int i=1;i<=9;i++)
	{
      gameboard2();
	if(i==1||i==3||i==5||i==7||i==9)
	{
		turn=turn1;
		cout<<"Enter number to fill the cell by Player1 : ";
		cin>>num;
		fillbox();
		checkwin();
        if(win==turn1)
		{
		    system("CLS");
		    gameboard1();
		    gameboard2();
			cout<<"Player1 win the game"<<endl;
			return 0;
		}
		else if(win==turn2)
		{
		    system("CLS");
		    gameboard2();
			cout<<"Player2 win the game"<<endl;
			return 0;
		}
		else
		{
		   	system("CLS");
		    gameboard1();
		}
	   
	}
	else
	{
		turn=turn2;
		cout<<"Enter number to fill the cell by Player2 : ";
		cin>>num;
		fillbox();
		checkwin();
		system("CLS");
		if(win==turn1)
		{
		    system("CLS");
		    gameboard1();
		    gameboard2();
			cout<<"Player1 win the game"<<endl;
			return 0;
		}
		else if(win==turn2)
		{
		    system("CLS");
		    gameboard1();
		    gameboard2();
			cout<<"Player2 win the game"<<endl;
			return 0;
		}
		else
		{
		    system("CLS");
		    gameboard1();
		}
		
	}
    }
	gameboard2();
	cout<<"game is draw";
	return 0;
}
int main()
{
	int n;
	do
	{                     
		gameboard1();
		cout<<"Choose between'X' or 'O' to play the game"<<endl;
		playerturn1();
		cout<<endl;
		playerturn2();
		for(int i=0;i<3;i++)
	    {
	      for(int j=0;j<3;j++)
	      {
	         box2[i][j]=' ';
	      }
	    }
		play();
		cout<<endl<<endl<<"Want to end the game (press = 0)"<<endl<<"Want to play the game again (press = 1)"<<endl<<"Enter Choice = ";
		cin>>n;

	} while (n==1);
	cout<<endl<<"                  END THE GAME             ";
    return 0;
  	
}
