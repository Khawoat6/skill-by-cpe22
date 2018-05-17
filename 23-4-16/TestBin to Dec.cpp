#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int a ,b ,c = 0 , d = 0;
	cin >> a; 
	while(a > 0)
	{
		b = a % 10;
		a = a/10;
		if(b == 1)
		{
			c = pow(2,d) + c ;
		}
		d++;
	}
	cout << c;
}
