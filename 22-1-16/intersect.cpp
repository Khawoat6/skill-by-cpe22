#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int count = 0;
    int a;
    cin >> a ;
    int ar[a] ;
    int ar2[a];
    for (int i = 0 ; i<a ; i++)
    {
        cin >> ar[i];
    }
        for (int i = 0 ; i<a ; i++)
    {
        cin >> ar2[i];
    }
    sort(ar,ar+a);
    sort(ar2,ar2+a);
	for (int i = 0 ; i <= a ; i++)
	{
		for (int j = 0 ; j <= a ; j++)
		{
			if (ar[i] > -100000000)
			{
				if(ar[i] == ar2[j] )
				{
					count++;
					ar[i] = 1000000000 ;
					ar2[j] = 1000000000 ;
				}
			}
		}
		
	}
	cout << count ;

}
