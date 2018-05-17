#include<iostream>

using namespace std;

int main()
{
	int order,x=0,y=0,mov,d=0;
	char direct[4] = {'E','S','W','N'} ;
	string move;
	cin>> order;
	
	for(int i=0 ; i< order ;i++)
	{
		cin >> move >> mov;
		
		if(move == "FD")
		{
			if(direct[d]=='N')
			{
				y += mov;
			}
			else if(direct[d]=='S')
			{
				y -= mov;
			}
			else if(direct[d]=='E')
			{
				x += mov;
			}
			else if(direct[d]=='W')
			{
				x -= mov;
			}
		}
		else if(move == "BW")
		{
			if(direct[d]=='N')
			{
				d-=2;
				y -= mov;
			}
			else if(direct[d]=='S')
			{
				d+=2;
				y += mov;
			}
			else if(direct[d]=='E')
			{
				d+=2;
				x -= mov;
			}
			else if(direct[d]=='W')
			{
				d-=2;
				x += mov;
			}
		}
		else if(move == "LT")
		{
			if(direct[d]=='N')
			{
				d--;
				x -= mov;
			}
			else if(direct[d]=='S')
			{
				d--;
				x += mov;
			}
			else if(direct[d]=='E')
			{
				d--;
				y += mov;
			}
			else if(direct[d]=='W')
			{
				d--;
				y -= mov;
			}
		}
		else if(move == "RT")
		{
			if(direct[d]=='N')
			{
				d++;
				x += mov;
			}
			else if(direct[d]=='S')
			{
				d++;
				x -= mov;
			}
			else if(direct[d]=='E')
			{
				d++;
				y -= mov;
			}
			else if(direct[d]=='W')
			{
				d++;
				y += mov;
			}
		}
		
		if(d == -1)
		{
			d = 3;
		}
		else if(d == 4)
		{
			d = 0;
		}
	}
	if(x > 50000 || x < -50000 || y > 50000 || y < -50000)
	{
		cout << "DEAD";
	}
	else
	{
		cout << x <<" " << y << "\n";
		cout << direct[d];
	}
}
