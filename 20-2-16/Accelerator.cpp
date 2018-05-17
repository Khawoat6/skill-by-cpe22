#include<iostream>
#include <vector>
#include <string>
#include <sstream>
#include <queue> 

using namespace std;

int main()
{
	vector<long long int> atomcal ;
	int midf = 0 , midb = 0, mid = 0;
	string input;
	queue<long long int> realans;
	
	getline(cin,input);
	
	while(input[0] != '0')
	{
		int i = 0;
		while(input[i] != '\0' )
		{
			if(input[i] != ' ')
			{
				int a = input[i] - 48;
				atomcal.push_back(a);
			}
			i++;
		}
		
		int ans = 0 ,round = 0;
		
		round = atomcal.size()/2;
		
		for(int i =0 ;i < round;i++)
		{
			mid = atomcal.size()/2;
			if(atomcal.size()%2 == 0)
			{
				midb = atomcal[mid];
				midf = atomcal[mid-1];
				
				if(midb>=midf)
				{
					ans = ans+(midb-midf);
					atomcal.erase(atomcal.begin()+(mid-1));
					atomcal.erase(atomcal.begin()+(mid-1));
				}
				else if(midb<midf)
				{
					ans = ans+(midf-midb);
					atomcal.erase(atomcal.begin()+(mid-1));
					atomcal.erase(atomcal.begin()+(mid-1));
				}	
			}
			else
			{
				round++;
				atomcal.erase(atomcal.begin()); //+mid
			}	
		}
		realans.push(ans);	
		getline(cin,input);
		atomcal.clear();
	}
	
	while(!realans.empty())
	{
		cout <<"\n" << realans.front() << " ";
		realans.pop();
	}
	
}
