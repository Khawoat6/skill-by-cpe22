#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int input,sq;
	cin >> input;
	while(input != 0)
	{
		sq = sqrt(input);
		if(sq*sq == input)
		{
			cout << "\n" << "yes";
		}
		else
		{
			cout << "\n" << "no";
		}
		cin >> input;
	}
}
