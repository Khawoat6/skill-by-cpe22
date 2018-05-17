#include<iostream>

using namespace std;

int main()
{	
	long long int a=1 , b=1 , c , j = 0 , countarr[100] ; 
	long long int arr[100];
	
	while ( a != 0 && b != 0 )
	{
		cin >> a >> b ;
		int count = 0;
		long long int fibb = 0 ;
		
		arr[0] = 0 , arr[1] = 1 ;
		 
		for(long long int i = 2 ; fibb < b ; i++)
		{
			fibb = arr[i-1] + arr[i-2] ; 
			arr[i] = fibb ;
			
			if( fibb >= a && fibb <= b)
			{
				count++;
			}
		}
		countarr[j] = count ;
		j++ ;
	}
	j = 0;
	while(countarr[j] != 0)
	{
		cout << countarr[j] << endl ;
		j++ ;
	}

	
}
