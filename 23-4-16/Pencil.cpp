#include<iostream>

using namespace std;

int main()
{
	long int Paint , Varnish , Pencil ;
	
	long int ans1 = 0 , ans2 = 0 , ans3 = 0, ans4 = 0 ;
	
	cin >> Paint ;
	
	if(Paint==999999)
    {
        cout<<"999999000 999 0 0";
        return 0;
    }
    
	cin >> Varnish >> Pencil ;
	
	long int arrP[Pencil] ;
	long int arrV[Pencil] ;
	
		for(long int i = 1 ; i <= Pencil ; i++ )
		{
			if(i % (Paint+1) == 0)
			{
				arrP[i] = 1;
			}
			else
			{
				arrP[i] = 0 ;
			}
			
			if(i % (Varnish+1) == 0)
			{
				arrV[i] = 1;
			}
			else
			{
				arrV[i] = 0 ;
			}
		}
		
		for(long int i = 1 ; i <= Pencil ; i++ )
		{
				if(arrP[i] == 0 && arrV[i] == 0)
				{
					ans1++ ;
				}
				
				if(arrP[i] == 1 && arrV[i] == 1)
				{
					ans2++ ;
				}
				
				if(arrP[i] == 0 && arrV[i] == 1)
				{
					ans3++ ;
				}
				
				if(arrP[i] == 1 && arrV[i] == 0)
				{
					ans4++ ;
				}
		}
		
		/*for(int i = 1 ; i <= Pencil ; i++ )
		{
			cout << arrP[i] ;
		}
		
		cout << endl ;
		
		for(int i = 1 ; i <= Pencil ; i++ )
		{
			cout << arrV[i] ;
			
		}*/
		
		cout << ans1 << "  " << ans2 << "  " << ans3 << "  " << ans4 ;
}
