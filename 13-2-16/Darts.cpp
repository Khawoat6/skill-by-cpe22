#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int darts,x,y,sum=0 ;
	double p ;
	cin >> darts;
	
	for(int i = 0 ; i < darts ; i++ )
	{
		cin >> x >> y ;
		p =(x*x)+(y*y);
		p = sqrt(p);
		if(p<=2)
		{
			sum = sum + 5;
		}
		else if(p<=4)
		{
			sum = sum + 4;
		}
		else if(p<=6)
		{
			sum = sum + 3;
		}
		else if(p<=8)
		{
			sum = sum + 2;
		}
		else if(p<=10)
		{
			sum = sum + 1;
		}
	}
	cout << sum ;
}
