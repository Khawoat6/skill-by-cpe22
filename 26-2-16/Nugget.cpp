#include<iostream>

using namespace std;


int main()
{
	int nugbuy,nugsell,S=0,M=0,L=0,min=6000;
	cin >> nugbuy;
	for(int i=0 ; i<=nugbuy; i++)
	{
	   	for(int j=0 ; j<=nugbuy; j++)
	   	{
	   		for(int k=0 ; k<=nugbuy; k++)
	   		{
		        nugsell = (6*i)+(9*j)+(20*k);
			       if (nugsell == nugbuy)
			    {
			      	S=i*30 ;
					M=j*40 ;
					L=k*60 ;
					if(S+M+L < min)
					{
						min = S+M+L;
					}
				}  
			}
		}	
	}
	
	if(min == 6000)
	{
		cout << "NONE!!";
	}
	else
	{
		cout << min;
	}
}

