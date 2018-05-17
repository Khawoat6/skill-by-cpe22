#include<iostream>

using namespace std;

int main()
{
	char cha[400000];
	char answer[400000];
	char A[5] = {';','$','*','/'};
	cin >> cha;
	int i = 0;
	int j = 0;
	
	while(cha[i] != A[0])
	{
		answer[j] = cha[i];
		i++;
		j++;
	}
	answer[j] = cha[i];
	while(cha[i] != A[1])
	{
		if(cha[i] == A[2] && cha[i+1] == A[3])
		{
			i++;
			while(cha[i] != A[3] && cha[i+1] != A[3])
			{
				answer[j] = cha[i];
				i++;
				j++;
			}
		}
		i++;
	}
	cout<< answer;
}
