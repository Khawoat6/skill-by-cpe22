#include<iostream>

using namespace std;

int main()
{
	int loop, arr[8][8];
	
	cin >> loop ;
	
	int patientX , patientY , count[loop];
	
	for(int i = 0 ; i < loop ; i++)
	{
		count[i] = 0 ;
		
	}
	
	for(int i = 0 ; i < 8 ; i++)
	{
		for(int j = 0 ; j < 8 ; j++)
		{
			arr[i][j] = 0 ;
		}
	}
	
	
	for(int i = 0 ; i < loop ; i++)
	{
		cin >> patientX >> patientY;
		
		arr[patientY-1][patientX-1] = 1 ;
		
	}
	
	/*for(int i = 0 ; i < 8 ; i++) // X-axis
	{
		for(int j = 0 ; j < 8 ; j++) // Y-axis
		{// vertical
			if(arr[j][i] == 1)
			{
				count[0]++ ;
				break ;
			}
		}
		for(int j = 0 ; j < 8 ; j++) // Y-axis
		{// horizontal
			if(arr[i][j] == 1)
			{
				count[1]++ ;
				break ;
			}
		}
	}*/
	
	//////////////////////////////////////////////////////////////////////////
	
	for(int i = 0 ; i < 8; i++)
	{
		if(arr[i][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	
	for(int i = 0 , a = 1 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 0 , a = 2 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 0 , a = 3 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 0 , a = 4 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 0 , a = 5 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 0 , a = 6 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 0 , a = 7 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 1 , a = 0 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 2 , a = 0 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 3 , a = 0 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 4 , a = 0 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 5 , a = 0 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 6 , a = 0 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	for(int i = 7 , a = 0 ; i < 8 && a < 8; i++,a++)
	{
		if(arr[a][i] == 1)
		{
			count[2]++;
			break;
		}
	}
	
	/////////////////////////////////////////////////////////////////////////
	
	for(int i = 7 , a = 0 ; i >= 0 && a >= 0; i--,a++)
	{
		if(arr[a][i] == 1)
		{
			count[3]++;
			break;
		}
	}
	
	
	////////////////////////////////////////////////////////////////////////
	
	for(int i = 0 ; i < 8 ; i++)
	{
		for(int j = 0 ; j < 8 ; j++)
		{
			cout << arr[i][j] ;
		}
		cout << endl ;
	}
	
	/*cout << count[0] ;
	cout << count[1] ;
	
	int min = 100;
	for(int i = 0 ; i < 2 ; i++)
	{
		if(min < count[i] && count [i] > 0)
		{
			min = count[i] ;
		}
	}*/
	
	//cout << min;
}
