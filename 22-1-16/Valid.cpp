#include <iostream>

using namespace std;

int main()
{
	string text;
	int j=33, num=48;
	cin >> text;
	
	if(text.length()>32)
	{
		return 0;
	}
	
	for (int i=0;i < text.length();i++)
	{
		while(j<127)
		{	
			if(i==0)
			{
				while(num<58)
				{
					if( text[0] == num)
					{
						cout << "Invalid";
						return(0);
					}
					num++;
				}

			}
			if( text[i] == j)
			{
				cout << "Invalid";
				return(0);
			}
			else if( j == 47)
			{
				j = 57;
			}
			else if( j == 64)
			{
				j = 90;
			}
			else if( j == 94)
			{
				j++;
			}
			else if( j == 96)
			{
				j = 122;
			}
			j++;
		}
		j = 33;
		num=48;
	}
	cout << "Valid";
	
}
