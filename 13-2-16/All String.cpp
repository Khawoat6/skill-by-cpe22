#include<iostream>

using namespace std;

int main()
{
	int n , b;
	cin >> n >> b ;
	
	for(int i = 0 ; i < b ; i++)
	{
		if(n >= 2)
		{
			for(int j = 0 ; j < b ; j++)
			{
				if( n >= 3)
				{
					for(int k = 0 ; k < b ; k++)
					{
						if(n >= 4)
						{
							for(int l = 0 ; l < b ; l++)
							{
								if(n == 5)
								{
									for(int m = 0 ; m < b ; m++)
									{
										cout << i << j << k << l << m  << "\n";
									}
								}
								else
								{
									cout << i << j << k << l << "\n";
								}
							}
						}
						else
						{
							cout << i << j << k << "\n";
						}
					}
				}
				else
				{
					cout << i << j << "\n";
				}
			}
		}
		else
		{
			cout << i << "\n";
		}
	}
	
}
