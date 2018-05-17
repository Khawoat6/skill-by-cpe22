#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
	int enemy,saiya,saiyapower=0;
	cin >> enemy;
	cin >> saiya;
	int powerpersaiya[saiya];
	for(int i = 0 ; i < saiya ; i++)
	{
		cin >> powerpersaiya[i];
	}
	
	sort(powerpersaiya,powerpersaiya+saiya);
	
	int i = 1;
	while(saiyapower<enemy)
	{
		i++;
		saiyapower+=powerpersaiya[saiya-i];
		
	}
	cout << i;
}
