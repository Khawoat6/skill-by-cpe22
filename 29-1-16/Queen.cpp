#include<iostream>

using namespace std;

int board[8];

int main()
{
	cin >> board[0] >> board[1] >> board[2] >> board[3] >> board[4] >> board[5] >> board[6] >> board[7] ;
	for(int i = 0 ; i < 8;i++)
	{
		if( i != 7)
		{
			int n = board[i];
			for(int j = i+1; j < 8  ;j++)
			{
				if(board[j] == n)
				{
					cout<<"Invalid";
					return(0);
				}
			}
			
			
			n = board[i]+1;
			for(int j = i+1; j < 8  ;j++)
			{
				if(board[j] == n)
				{
					cout<<"Invalid";
					return(0);
				}
				n++;
			}
			
			n = board[i]-1;
			for(int j = i+1; j < 8  ;j++)
			{
				
				if(board[j] == n)
				{
					cout<<"Invalid";
					return(0);
				}
				n--;
			}
		}
		
		if(i!=0)
		{
			int n = board[i];
			for(int j = i-1; j > -1  ;j--)
			{
				if(board[j] == n)
				{
					cout<<"Invalid";
					return(0);
				}
			}
			
			n = board[i]+1;
			for(int j = i-1; j > -1  ;j--)
			{
				if(board[j] == n)
				{
					cout<<"Invalid";
					return(0);
				}
				n++;
			}
			
			n = board[i]-1;
			for(int j = i-1; j > -1  ;j--)
			{
				if(board[j] == n)
				{
					cout<<"Invalid";
					return(0);
				}
				n--;
			}
		}
	
	}
	cout << "Valid";
}


