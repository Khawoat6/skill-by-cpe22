#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main()
{
	string Value1 , Value2 , Sum ;
	
	cin >> Value1 >> Value2 >>Sum ;
	
	long long int Val1[Value1.length()] , Val2[Value2.length()] , Sum1[Sum.length()] ,a = 2;
	
	for(int i = 0 ; i < Value1.length() ; i++)
	{
		
		if(Value1[i] >= 65 && Value1[i] <= 90 )
		{
			Val1[i] = Value1[i] - 55 ;
			a = 10 ;
		}
		else
		{
			Val1[i] = Value1[i] - 48;
		}
		
	}
	
	for(int i = 0 ; i < Value2.length() ; i++)
	{
		
		if(Value2[i] >= 65 && Value2[i] <= 90 )
		{
			Val2[i] = Value2[i] - 55 ;
			a = 10 ;
		}
		else
		{
			Val2[i] = Value2[i] - 48;
		}
		
	}
	
	for(int i = 0 ; i < Sum.length() ; i++)
	{
		
		if(Sum[i] >= 65 && Sum[i] <= 90 )
		{
			Sum1[i] = Sum[i] - 55 ;
			a = 10 ;
		}
		else
		{
			Sum1[i] = Sum[i] - 48;
		}
		//cout  << "Sum = " << Su[i] ;
	}
	
	//cout << Su[0] << " " << Su[1] << endl ;
	
	long long int NewValue1 = 0 , NewValue2 = 0 , NewSum = 0  , point , d;
	
	/*for(int i = 0 ; i < 1; i++)
	{
		cout << Val1[i] << endl ;
		cout << Val2[i] << endl ;
		cout << Sum1[i] << endl ;
	}*/
	
	for(int i = a ; i < 37 ; i++ ) //Change Base
	{
		
		d = Value1.length()-1 ;
		for(int k = 0 ; k < Value1.length() ; k++ ) //Process Val1
		{
			point = Val1[k];
			if(point >= 0 && point < i)
			{
				NewValue1 = NewValue1 + (point * pow(i,d)) ;
			}
			d--;
		}
		
		d = Value2.length()-1 ;
		for(int k = 0 ; k < Value2.length() ; k++ ) //Process Val2
		{
			point = Val2[k];
			if(point >= 0 && point < i)
			{
				NewValue2 = NewValue2 + (point * pow(i,d)) ;
			}
			d--;
		}
		
		
		d = Sum.length()-1 ;
		for(int k = 0 ; k < Sum.length() ; k++ ) //Process Sum
		{
			point = Sum1[k];
			if(point >= 0 && point < i)
			{
				NewSum = (pow(i,d) * point) + NewSum ;
			}
			d--;
		}
		
		//cout << NewValue1 << " " << NewValue2 << " " << NewSum << endl  ;
		
		if(NewValue1 + NewValue2 == NewSum) //= 2,9,35
		{
			cout << i ;
			return 0 ;
		}
		
		NewValue1 = 0;
		NewValue2 = 0;
		NewSum = 0 ;
	}
	cout << "no" ;
}
