#include<iostream>

using namespace std;

int main()
{
	int pick,push,loop=0,count=0,pout=0,po=0;
	cin >> push >> pick ;
	int arr[push][5];
	int ans[pick];
	while(loop < pick+push)
	{
		int order, type ;
		cin >> order;
		
		if(order == 1)
		{
			cin >> type;
			if(type == 1)
			{
				int weight,value;
				cin >> weight >> value ;
				
				arr[po][0] = type;
				arr[po][1] = weight;
				arr[po][2] = value;
				arr[po][3] = 0;
				arr[po][4] = 0;
				
				po++;
			}
			else if(type == 2)
			{
				int weight,value,times_up;
				cin >> weight >> value >> times_up ;
				
				arr[po][0] = type;
				arr[po][1] = weight;
				arr[po][2] = value;
				arr[po][3] = times_up;
				arr[po][4] = 0;
				
				po++;
			}
			else if(type == 3)
			{
				int weight,value,times_up,c_weight;
				cin >> weight >> value >> times_up >> c_weight;
				
				arr[po][0] = type;
				arr[po][1] = weight;
				arr[po][2] = value;
				arr[po][3] = times_up;
				arr[po][4] = c_weight;
				
				po++;
			}
		}
		
		for(int i=0; i<po ;i++)
		{
			if(arr[i][3]<=count)
			{
				if(	arr[i][0]==2)
				{
					arr[i][2] = 0;
				}
				else if(arr[i][0]==3)
				{
					arr[i][1] = arr[i][4];	
				}
			}
		}
		
		count++;
		
		if(order == 2)
		{
			ans[pout]=arr[pout][2];
			pout++;
		}
		loop++;
	}
	
	for(int i=0; i<pick ; i++)
	{
		cout << ans[i] << endl;
	}
}
