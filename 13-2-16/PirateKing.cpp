#include<iostream>
#include <vector>

using namespace std;

int main()
{
	int player = 1, king = 1 ,slave = 1;
	vector<int> spin;
	vector<int> shiled;
	vector<int> money;
	string action;	
	
	money.push_back(0);
	spin.push_back(0);
	shiled.push_back(0);
	
	while(player != 0)
	{
		cin >> player ;
		
		if(player != 0)
		{
			if(money.size() < player+1 && spin.size() < player+1)
			{
				money.push_back(100000);
				spin.push_back(20);
				shiled.push_back(0);
			}
			
			cin >> action;
		
			if(action == "steal" && spin[player] != 0)
			{
				spin[player]--;
				int steal;
				cin >> steal ;
				if(player != steal)
				{
					steal = ((money[king]*steal)/100);
					money[king] =  money[king] - steal;
					money[player] = money[player] + steal;
					
					if(	money[player] > money[king])
					{
						if(	money[king] < money[slave])
						{
							slave = king;
						}
						king = player;
					}
					else if(money[player] == money[king])
					{
						if(player < king)
						{
							king = player;
						}
					}
				}	
			}
			else if(action == "invite" && spin[player] != 0)
			{
				spin[player]--;
				long long int invite;
				cin >> invite ;
				money[invite];
				if(money.size()<invite)
				{
					spin[player] = spin[player] + 20;
				}
			}
			else if(action == "shield" && spin[player] != 0)
			{
				spin[player]--;
				if(shiled[player]<=3)
				{
					shiled[player]++;
				}
			}
			else if(action == "money" && spin[player] != 0)
			{
				spin[player]--;
				int get;
				cin >> get;
				money[player] =  money[player] + get;
				
				if(	money[player] > money[king])
				{
					king = player;
				}
				else if(money[player] == money[king])
				{
					if(player < king)
					{
						king = player;
					}
				}
				
				if(	money[player] < money[slave])
				{
					slave = player;
				}
				else if(money[player] == money[slave])
				{
					if(player < king)
					{
						slave = player;
					}
				}
			}
			else if(action == "spin" && spin[player] != 0)
			{
				spin[player]--;
				spin[player] = spin[player]+10;
			}
			else if(action == "attack" && spin[player] != 0)
			{
				spin[player]--;
				int playercode;
				cin >> playercode ;
				if(player != playercode && money.size() >= playercode)
				{	
					if(shiled[playercode]>=1)
					{
						shiled[playercode] = shiled[playercode]-1;
						
						if(money[playercode]<100000)
						{
							money[player] = money[player]+money[playercode];
							money[playercode] = 0;
						}
						else
						{
							money[player] = money[player]+100000;
							money[playercode] = money[playercode]-100000;
						}
					}
					else
					{
						
						if(money[playercode]<300000)
						{
							money[player] = money[player]+money[playercode];
							money[playercode] = 0;
						}
						else
						{
							money[player] = money[player]+300000;
							money[playercode] = money[playercode]-300000;
						}
					}
					
					if(	money[player] > money[king])
					{
						king = player;
					}
					else if(money[player] == money[king])
					{
						if(player < king)
						{
							king = player;
						}
					}
				}
			}
		}
	}
	cout << king << " "<< money[king] << "\n";
	cout << slave << " "<< money[slave] << "\n";
}
