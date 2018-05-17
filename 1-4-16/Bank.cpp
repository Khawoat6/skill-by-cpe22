#include<iostream>

using namespace std;

void print (int arr[],int m) {
	cout << "[";
	for (int i = 0 ; i < m ; i++) {
		cout << arr[i] << " ";
	}
	cout << "]" << endl;
}

int main()
{
	int set,m,n;
	cin >> set;
	int ans[set-1];
	
	for(int i = 0 ; i < set ; i++)
	{
		cin >> m >> n;
		int time[n-1],service[m-1];
		for(int j = 0 ; j < m ; j++)
		{
			service[j] = 0;
		}
		
		int max = 0;
		
		for(int j = 0 ; j < n ; j++)
		{
			cin >> time[j];
			
			int mini = 0 ;
			
			for(int k = 0 ; k < m ; k++)
			{
				if(service[k] < service[mini])
				{
					mini = k;
				}
			}
			
			service[mini] = service[mini] + time[j];
			
			//print (service,m);
			
			
			if(service[mini] > service[max])
			{
				max = mini;
			}
		}
		
		ans[i]=service[max];
		
	}
	
	for(int i = 0 ; i < set ; i++)
	{
		cout << ans[i] << endl;
	}
	
}
