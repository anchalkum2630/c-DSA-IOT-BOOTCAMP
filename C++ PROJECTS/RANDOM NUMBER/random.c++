#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    srand(time(0));
    int num;
    int guess;
    int game=0;
    int n=1,p=0;
    cout<<endl<<endl<<"---------------- NUMBER  GUESSING  GAME ----------------"<<endl<<endl<<endl;
    //generate random number between 0 - 99
    cout<<"    [ Number to enter in guessing game between 0-99 ]"<<endl<<endl;
    do
    {
       int count=0;
       game++;
       cout<<endl<<" G A M E --->> "<<game<<endl;
       num=rand()%100;
      do
       {
    	count++;
     	cout<<endl<<" STEP : "<<count;
        cout<<endl<<"Enter guessed number : ";
        cin>>guess;
        if(guess<10)
        {
             cout<<" ________"<<endl;
             cout<<"|        |"<<endl;
             cout<<"|   "<<guess<<"    |"<<endl;
             cout<<"|________|"<<endl;
             if(guess<num)
             {
                cout<<"Guessed number is too low"<<endl<<endl;
                n=1;
             }
             else if(guess>num)
             {
                cout<<"Guessed number is too high"<<endl<<endl;
                n=1;
             }
             else
             {
                cout<<"Guessed number is correct"<<endl;
                cout<<"---------- You Win The Game ---------- "<<endl<<endl;
                n=0;
             }
        }
        else if(guess>9&&guess<100)
       {
            cout<<" ________"<<endl;
            cout<<"|        |"<<endl;
            cout<<"|   "<<guess<<"   |"<<endl;
            cout<<"|________|"<<endl;
            if(guess<num)
             {
                cout<<"Guessed number is too low"<<endl<<endl;
                n=1;
             }
             else if(guess>num)
             {
                cout<<"Guessed number is too high"<<endl<<endl;
                n=1;
             }
             else
             {
                cout<<"Guessed number is correct"<<endl;
                cout<<"---------- You Win The Game ---------- "<<endl<<endl;
                n=0;
             }
        }
         else
        {
        	    cout<<"Guessed number exceed 99 enter number between 0 - 99"<<endl<<endl;
        	    n=1;
	    }
      }while(n==1);
     cout<<"Want to end the game (press = 0)"<<endl<<"Want to play the game again (press = 1)"<<endl<<endl<<"Enter Choice = ";
     cin>>p;
    }while(p==1);
    cout<<"            END THE GAME      ";
return 0;
}
