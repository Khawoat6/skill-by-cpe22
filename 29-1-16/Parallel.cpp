#include<iostream>
#include<string>
using namespace std;

int main()
{
	int howmany;
	cin >> howmany;
	
	for(int i = 0; i< howmany; i++)
	{
		string word;
		cin >> word;
		char ans[word.length()];
		int n=0;
		for(int j=0; j<word.length()*2 ;j++)
		{
			ans[n] = word[j];
			n++;
			if(j<word.length())
			{
				for(int k=j;k<word.length()-1;k++)
				{
					cout <<" " ;
				}
				cout << ans << "\n";
			}	
			else
			{
				for(int k=0;k<word.length();k++)
				{
					for(int l=0;l<word.length();l++)
					{
						ans[l] = ans[l+1];
						ans[l+1]=' ';
					}
					cout << ans << "\n";
				}
			}
		}		
	}
	
}
