#include<iostream>

using namespace std;

int main()
{
	int count, eq;
	string ans="No";
	cin >> count;
	int countuse=count,box[count][count], ansrow[count], anscol[count], ansdia[2];
	for (int i=0;i<count;i++)
	{
		for (int j=0;j<count;j++)
		{
			cin >>box[i][j];
		}
	}
	
	for (int i=0;i<count;i++)
	{
		ansrow[i]=box[i][0];
		for (int j=1;j<count;j++)
		{
			ansrow[i] = ansrow[i] + box[i][j];
		}
	}
	
	for (int i=0;i<count;i++)
	{
		anscol[i]=box[0][i];
		for (int j=1;j<count;j++)
		{
			anscol[i] = anscol[i] + box[j][i];
		}
	}
	
	ansdia[0]=box[0][0];
	for (int i=1;i<count;i++)
	{
		ansdia[0] = ansdia[0] + box[i][i];
	}
	
	ansdia[1]=box[countuse-1][0];
	countuse=countuse-1;
	for (int i=1;i<count;i++)
	{
		ansdia[1] = ansdia[1] + box[countuse-1][i];
		countuse=countuse-1;
	}
	
	for (int i=0;i<count;i++)
	{
		if(ansdia[0] == ansdia[1] )
		{
			if(ansrow[i] == ansdia[1] && ansrow[i] == ansdia[0])
			{
				ans = "Yes";
			}
			else
			{
				ans = "No";
				break;
			}

			if(anscol[i] == ansdia[0] && anscol[i] == ansdia[1])
			{
				ans = "Yes";
			}
			else
			{
				ans = "No";
				break;
			}
		}
		else
		{
			ans = "No";
			break;	
		}
		
	}
	cout << ans;
	
}
