#include<iostream>

using namespace std;

int main()
{
	long long int size,degree,check;
	cin >> size;
	long int square[size][size];
	for(int i=0;i<size ;i++)//input
	{
		for(int j=0;j<size ;j++)
		{
			cin >> square[i][j];
		}
	}
	
	cin >> degree;
	check = degree%90;
	degree = degree/90;
	while(degree > 3)
	{
		if(degree > 3)
		{
			degree = degree - 4;
		}
	}
	if(check == 0 && degree < 4)
	{
		if(degree == 0)
		{
			for(int i = 0 ; i < size;i++)
			{
				for(int j = 0 ; j < size;j++)
				{
					cout << square[i][j] << " ";
				}
				cout << endl;
			}
		}
		else if(degree == 1)
		{
			for(int j = 0 ; j < size; j++)
			{
				for(int i = size-1 ; i >= 0; i--)
				{
					cout << square[i][j] << " ";
				}
				cout << endl;
			}
		}
		else if(degree == 2)
		{
			for(int i = size-1 ; i >= 0  ;i--)
			{
				for(int j = size-1 ; j >=0  ;j--)
				{
					cout << square[i][j] << " ";
				}
				cout << endl;
			}
		}
		else if(degree == 3)
		{
			for(int j = size-1 ; j >= 0; j--)
			{
				for(int i = 0 ; i < size; i++)
				{
					cout << square[i][j] << " ";
				}
				cout << endl;
			}
		}
	}
	else
	{
		cout << "No output";
	}
}
