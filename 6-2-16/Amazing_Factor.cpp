#include<iostream>

using namespace std ;

int main()
{
	int input=1 ;
	
	while(input != 0)
	{
		int check = 0 , sum= 0;
		
		cin >> input;
		
		for(int i=1 ; i<input ;i++)
		{
			if(check == 0 )
			{
				for(int j=2 ; j<input ; j++)
				{
					if(input%j==0)
					{
						check = 1;
					}
				}
			}
			
			if( input%i == 0)
			{
				sum=sum+input;
			}
		}
		
		if(check == 0)
		{
			cout << "None" ;
		}
		else
		{
			cout << sum;
		}
		
	}
}
