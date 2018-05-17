#include<iostream>

using namespace std;

int main()
{
	int u,v,ans;
	cin >> u >> v;
	while(u != 0 && v != 0)
	{
		while(true)
		{
			if(u==v)
			{
				cout << ans << "\n";
				break;
			}
			else
			{
				if(u>v)
				{
					if(u%2==0)
					{
						u=(u-2)/2;
					}
					else
					{
						u=(u-1)/2;
					}
					ans = u;
				}
				else
				{
					if(v%2==0)
					{
						v=(v-2)/2;
					}
					else
					{
						v=(v-1)/2;
					}
					ans = v;
				}
			}	
		}	
		cin >> u >> v;
	}
}
