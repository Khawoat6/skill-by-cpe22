#include<iostream>

using namespace std;

int main()
{
	int group;
	cin >> group;
	for(int j = 0;j<group;j++)
	{
		int money,person;
		cin >> money >> person;
		
		int ans[person];
		
		for(int i=1 ; i<person ;i++ )
		{
			if(i%2 == 0)
			{
				ans[i] = 1;
				money = money-1;
			}
			else
			{
				ans[i] = 0;
			}
		}
		
		cout << money ;
		
		for(int i=1 ; i<person ;i++ )
		{
			cout << " " << ans[i] ;
		} 
		cout << "\n" ;
	}
}
