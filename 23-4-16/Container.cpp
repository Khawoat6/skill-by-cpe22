#include<iostream>
#include<string>

using namespace std;

int main()
{
	string input = "Hello";
	int stack = 0,count=1 , min=0 ;
	
	while (input != "end")
	{
		cin >> input;
		
		char arr[input.length()] ;
		
		for(int i = 0 ; i < input.length() ; i++)
		{
			arr[i] = '^' ;
		}
		
		for(int i = 0 ; i < input.length() ; i++)
		{
			for(int j = 0 ; j < input.length() ; j++)
			{
				if(input[i] <= arr[j])
				{
					if(arr[j] == '^')
					{
						stack++;
						arr[j] = input[i] ;
						//cout << input[i] ;
						break;
					}
					else
					{
						arr[j] = input[i] ;
						break;
					}
				}
			}
		}
		if(input != "end")
		{
			cout << "Case " << count << ": " << stack << endl;
			stack = 0;
			count++ ;
		}
	}
}
