#include<iostream>

using namespace std;

int main()
{
	int input ;
	int W1 , W2 , W5 , W10 ;
	int N1 , N2 , N5 , N10 ;
	cin >> input ; 
	
	int arr[input] ;
	
	for(int i = 0 ; i <= input; i++)
	{
		arr[i] = 0 ;
	}
	
	for(int i = 1 ; i <= input ; i++ )
	{
		
		int sum , sum1 , sum2, sum5 , sum10;
		cin >> W1 >> W2 >> W5 >> W10 ;
		cin >> N1 >> N2 >> N5 >> N10 ;
		
		sum = (W1*N1)+(W2*N2)+(W5*N5)+(W10*N10) ;
		
		sum10 = (sum/W10)*10 ;
		
		if(sum%W10 != 0)
		{
			sum10++;
		}
		
		int min = sum10;
		
		sum5 = (sum/W5)*5 ;
		
		if(sum%W5 != 0)
		{
			sum5++;
		}
		
		if(sum5 < min)
		{
			min = sum5;
		}
		
		sum2 = (sum/W2)*2 ;
		
		if(sum%W2 != 0)
		{
			sum2++;
		}
		
		if(sum2 < min)
		{
			min = sum2;
		}
		
		sum1 = (sum/W1);
	
		if(sum%W1 != 0)
		{
			sum1++;
		}
		
		if(sum1 < min)
		{
			min = sum1;
		}
		
		
		arr[i]  = min ;	
		//cout << min ;
	}
	for(int i = 1 ; i <= input ; i++)
	{
		cout << arr[i] << endl ;
	}
	
}
