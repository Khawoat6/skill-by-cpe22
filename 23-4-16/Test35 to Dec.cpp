#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()
{
	int a[3] ,b ,c = 0 , e = 1000;
	string as;
	cin >> as;
	
	int d = as.length()-1 ;
	
	for(int i = 0 ; i < as.length() ; i++)
	{
		//cout << as[i] << " " ;
		
		if(as[i] >= 65 && as[i] <= 90 )
		{
			a[i] = as[i] - 55 ;
		}
		else
		{
			a[i] = as[i] - 48;
		}
		//cout << a[i] << endl ;
	}
	
	for(int i = 0 ; i < as.length() ; i++)
	{
		b = a[i];
		//a[i] = a[i]%e;
		if(b >= 0 && b < 35)
		{
			//cout << d << " "<< b << " "<< c << endl ;
			c = ( pow(35,d) * b ) + c ;
			//cout << c << endl ;
		}
		d--;
		//e = e/10;
	}
	 
	 cout << c ;
	
}
