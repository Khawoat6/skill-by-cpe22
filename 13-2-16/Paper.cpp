#include<iostream>

using namespace std;

void find(int many,int i)
{
	if(many >= 1)
	{
		if(i == 1)
		{
			find(many-1,i);
			cout<<"D";
			find(many-1,i*-1);
		}
		else
		{
			find(many-1,i*-1);
			cout<<"U";
			find(many-1,i);
		}
	}
}
int main()
{
	int many;
	cin>>many;
	find(many,1);
	return 0;
}
