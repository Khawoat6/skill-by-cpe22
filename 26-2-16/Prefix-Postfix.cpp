#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	stack<char> ans;
	string input ;
	
	cin >> input ;
	int count = 1;
	for(int i = 0 ; i < input.length() ; i++ )
	{
		if(input[i] >= 97 && input[i] <= 122)
		{
			if(ans.top() = '(')
			{
				cout << ans.top();
				ans.pop();
				cout<< input[i] ;
			}
			else
			{
				cout<< input[i] ;
				if(!ans.empty())
				{
					cout << ans.top();
					ans.pop();
				}
			}
				
		}
		else
		{
			if(input[i] == 42)
			{
				if(input[i+1] == 43)
				{
					ans.push(')');
					ans.push(input[i]);
					ans.push('(');
				}
				else
				{
					ans.push(input[i]);
				}
			}
			else
			{
				ans.push(input[i]);
			}
		}
	}
	
}
