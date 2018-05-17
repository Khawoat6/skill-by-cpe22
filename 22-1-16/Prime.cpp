#include <iostream>

using namespace std;

int main()
{
	int value;
	string ans = "No";
	cin >> value;
	
	if  (value == 0 || value == 1)
	{
		cout <<"No";
		return(0);
	}
	else if (value==2)
	{
		cout <<"Yes";
		return(0);
	}
	else
	{
		if (value%2 == 0)
		{
			cout << "No";
			return(0);
		}
		else
		{
			for (int i=2;i<value;i++)
			{
				if (value%i == 0)
				{
					cout << "No";
					break;
				}
				if (i == value-1)
				{
					cout << "Yes";
					break;
				}
			}
		}
	}
}
