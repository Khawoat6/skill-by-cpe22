#include <iostream>
#include<string>

using namespace std;

int main()
{
	string input,input2,input3;
	int half,j=0;
	
	cin >>input;
	
	for(int i=input.length()-1; i>-1 ;i--)
	{
		input2.append(input,i,1);
	}
	
	
	
	cout << input2;
}
