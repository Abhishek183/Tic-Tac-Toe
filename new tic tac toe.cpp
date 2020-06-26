#include<bits/stdc++.h>
using namespace std;
char player1='X',player2='O',choice;
bool winner=false;


bool win(char s[], int n)
{
	 if (s[1] == s[2] && s[2] == s[0])

        return true;
    else if (s[4] == s[5] && s[5] == s[3])

        return true;
    else if (s[7] == s[8] && s[8] == s[6])

        return true;
    else if (s[0] == s[3] && s[3] == s[6])

        return true;
    else if (s[1] == s[4] && s[4] == s[7])

        return true;
    else if (s[2] == s[5] && s[5] == s[8])

        return true;
    else if (s[0] == s[4] && s[4] == s[8])

        return true;
    else if (s[2] == s[4] && s[4] == s[6])

        return true;
    else if (s[1] != '1' && s[2] != '2' && s[3] != '3'
                    && s[4] != '4' && s[5] != '5' && s[6] != '6'
                  && s[7] != '7' && s[8] != '8' && s[0] != '0')

        return false;

	else return false;





}

void turn(char s[],char choice)
{



	if(choice==player1)
	{   cout<<endl<<" Its ur turn player1 ....."<<endl;

	}
	else{
	 cout<<endl<<" Its player2 turn , wait for a second...."<<endl;
	}
	jump:
	 int num;
	 cin>>num;
	if(s[num]=='X' || s[num]=='O' || num>8) { cout<<"wrong place ; maybe place is filled already,try again...";goto jump;}
	s[num]=choice;
}



void display(char s[],int n)
{
  for(int i=0;i<n;i++)
  {
  	cout<<s[i]<<"   |   ";
  	if( i==2 || i==5 || i==8 ) cout<<endl;

  }
}

int main()
{
	int n=9;
	char s[n];
	for(int i=0;i<n;i++)
	{
	  s[i]=char(i+48);
	}

	cout<<"ENTER THE PLACE CELL NO. BETWEEN 0 TO 8   BEST OF LUCK"<<endl;
	int t;
	t=rand()%2;
	for(int i=0;i<n;i++)
	{

	  if(t==0) {choice=player1; t++;}
	  else {choice=player2;t--;}

	  turn(s,choice);
	  display(s,n);

	  if(win(s,n)){cout<<endl<<"congratulation, winner is "<<choice<<endl; break;}
	}
	if(!win(s,n)) cout<<endl<<"MATCH IS TIE"<<endl;

}
