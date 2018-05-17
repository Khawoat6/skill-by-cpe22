#include<iostream>
using namespace std;
int main()
{
	string a ;
	char N;
	char S;
	char E;
	char W;
	char Z;
	cin >> a ;
	int ar[2]={0,0};
	for (int i=0;a[i]!=0;i++)
	{
		if (a[i] == 'N')
		{
			ar[1]=ar[1]+1;
		}
		else if (a[i] == 'S' )
		{
			ar[1]=ar[1]-1;
		}
		else if (a[i] == 'E') 
		{
			ar[0]=ar[0]+1;
		}
		else if	(a[i] == 'W') 
		{
			ar[0]=ar[0]-1;
		}
		else if (a[i] == 'Z' )
		{
			ar[0] = 0;
			ar[1] = 0;
		}
	}
	cout << ar[0] << " " << ar[1];
}
