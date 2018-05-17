#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int a ,b ,c = 0 , d = 3 , e = 1000;
	cin >> a; 
	while(a > 0)
	{
		b = a/e;
		a = a%e;
		if(b > 0 && b < 9)
		{
			cout << d << " "<< b << " "<< c << endl ;
			c = ( pow(9,d) * b ) + c ;
			cout << c << endl ;
		}
		d--;
		e= e/10;
	}
	cout << c;
}
