#include <iostream>
#include <algorithm>
using namespace std;

int gcd (int b , int c)
{
	if (b == 0)
	{
		return c;
	}
	else
	{
		c = gcd(c % b , b);
	}
}

int main()
{
    int a;
    cin >> a ;
    int ar[a] ;
    for (int i = 0 ; i<a ; i++)
    {
        cin >> ar[i];
    }
    sort(ar,ar+a);
	
	int b = ar[0] , c = ar[a-1];
	
	
	a = gcd (b,c);
	
	cout << a;
    cin >> a;
}
