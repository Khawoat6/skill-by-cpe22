#include<iostream>

using namespace std;

int main()
{
	int sum=0,round;
	cin>> round ;
	for(int i=0;i!=round+1;i++)
	{
		sum=sum+i;
	}
	cout<<sum;
}
