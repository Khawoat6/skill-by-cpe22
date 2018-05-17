#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string input;
    int countchar=0 , countint=0;
    int ans = 0;
    cin >> input;
    
    for(int i = 0 ;i <input.length();i++ )
    {
            if(input[i]>='A' && input[i]<='Z' )
            {
                countchar++;                 
            }
            else if(input[i]>='0' && input[i]<='9' )
            {
                countint++;    
            }
            else
            {
            	countchar++;
            	countint++; 
			}
    }
    
    if(countint == 0)
    {
        for(int i = 0 ; i < input.length() ; i++ )
        {
        	if( input[i] == 'M' )
        	{
        		if(input[i+1] == 'M' && input[i+2] == 'M' && input[i+3] == 'M')
				{
					cout << "Error";
					return 0;
				}
				
				else if(input[i+1] == 'M' && input[i+2] == 'M')
				{
					ans = ans + 3000;
					i = i + 2;
				}
				else if(input[i+1] == 'M')
				{
					ans = ans + 2000;
					i = i+1;
				}
				else
				{
					ans = ans + 1000;
				}
			}
			else if( input[i] == 'D' )
			{
				if(input[i] == 'D')
				{
					ans = ans + 500;
				}
				else
				{
					cout << "Error";
					return 0;
				}
			}
			else if( input[i] == 'C' )
			{
				if(input[i+1] == 'C' && input[i+2] == 'C' && input[i+3] == 'M')
				{
					cout << "Error";
					return 0;
				}
				else if(input[i+1] == 'C' && input[i+2] == 'M')
				{
					cout << "Error";
					return 0;
				}
				
				else if(input[i+1] == 'C' && input[i+2] == 'C' && input[i+3] == 'D')
				{
					cout << "Error";
					return 0;
				}
				else if(input[i+1] == 'C' && input[i+2] == 'D')
				{
					cout << "Error";
					return 0;
				}
				
				else if(input[i+1] == 'C' && input[i+2] == 'C' && input[i+3] == 'C')
				{
					cout << "Error";
					return 0;
				}
				else if(input[i+1] == 'C' && input[i+2] == 'C')
				{
					ans = ans + 300;
					i = i + 2;
				}
				else if(input[i+1] == 'C')
				{
					ans = ans + 200;
					i = i+1;
				}
				else if(input[i+1] == 'M' )
				{
					ans = ans + 900;
					i++;
				}
				else if(input[i+1] == 'D' )
				{
					ans = ans + 400;
					i++;
				}
				else
				{
					ans = ans + 100;
				}
			}
			else if( input[i] == 'L' )
			{				
				if(input[i] == 'L')
				{
					ans = ans + 50;
				}
				else
				{
					cout << "Error";
					return 0;
				}
			}
			else if( input[i] == 'X' )
			{
				if(input[i+1] == 'X' && input[i+2] == 'X' && input[i+3] == 'C')
				{
					cout << "Error";
					return 0;
				}
				else if(input[i+1] == 'X' && input[i+2] == 'C')
				{
					cout << "Error";
					return 0;
				}
				
				else if(input[i+1] == 'X' && input[i+2] == 'X' && input[i+3] == 'L')
				{
					cout << "Error";
					return 0;
				}
				else if(input[i+1] == 'X' && input[i+2] == 'L')
				{
					cout << "Error";
					return 0;
				}
				
				else if(input[i+1] == 'X' && input[i+2] == 'X' && input[i+3] == 'X')
				{
					cout << "Error";
					return 0;
				}
				else if(input[i+1] == 'X' && input[i+2] == 'X')
				{
					ans = ans + 30;
					i = i + 2;
				}
				else if(input[i+1] == 'X')
				{
					ans = ans + 20;
					i = i+1;
				}
				if(input[i+1] == 'C')
				{
					ans = ans + 90;
					i++;
				}
				else if(input[i+1] == 'L' )
				{
					ans = ans + 40;
					i++;
				}
				else
				{
					ans = ans + 10;
				}
			}
			else if( input[i] == 'V' )
			{
				if(input[i] == 'V')
				{
					ans = ans + 5;		
				}
				else
				{
					cout << "Error" ;
					return 0;
				}
			}
			else if( input[i] == 'I' )
			{
				if(input[i+1] == 'I' && input[i+2] == 'I' && input[i+3] == 'V')
				{
					cout << "Error";
					return 0;
				}
				else if(input[i+1] == 'I' && input[i+2] == 'V')
				{
					cout << "Error";
					return 0;
				}
				else if(input[i+1] == 'I' && input[i+2] == 'I' && input[i+3] == 'X')
				{
					cout << "Error";
					return 0;
				}
				else if(input[i+1] == 'I' && input[i+2] == 'X')
				{
					cout << "Error";
					return 0;
				}
				else if(input[i+1] == 'I' && input[i+2] == 'I' && input[i+3] == 'I')
				{
					cout << "Error";
					return 0;
				}	
				
				else if(input[i+1] == 'I' && input[i+2] == 'I')
				{
					ans = ans+3;
					i = i+2;
				}
				else if(input[i+1] == 'I')
				{
					ans = ans+2 ;
					i++;
				}
				else if(input[i+1] == 'V' )
				{
					ans = ans + 4;
					i++;
				}
				else if(input[i+1] == 'X')
				{
					ans = ans + 9;
					i++;				
				}
				else
				{
					ans = ans + 1;
				}
			}
			else
			{
				cout << "Error" << endl ;
				return 0 ;
			}
		}
		
		if(ans > 0 && ans < 4000)
		{
			cout << ans ;
		}
		else if(ans <= 0 || ans >= 4000)
		{
			cout << "Error" ;
		}
		
    }
    else if(countchar == 0)
    {
    	stringstream intinput(input) ;
		int newin ;
		intinput >> newin ;
        if(newin < 1 || newin > 3999)
        {
        	cout <<"Error" ;
        	return 0;
		}
		else
		{
			while(newin != 0)
			{
				if(newin >= 1000)
				{
					cout << "M" ;
					newin = newin - 1000;
				}
				else if(newin >= 900)
				{
					cout << "CM" ;
					newin = newin - 900 ;
				}
				else if(newin >= 500)
				{
					cout << "D" ;
					newin = newin - 500;
				}
				else if(newin >= 400)
				{
					cout << "CD" ;
					newin = newin - 400 ;
				}
				else if(newin >= 100)
				{
					cout << "C" ;
					newin = newin - 100;
				}
				else if(newin >= 90)
				{
					cout << "XC" ;
					newin = newin - 90 ;
				}
				else if(newin >= 50)
				{
					cout << "L" ;
					newin = newin - 50;
				}
				else if(newin >= 40)
				{
					cout << "XL" ;
					newin = newin - 40 ;
				}
				else if(newin >= 10)
				{
					cout << "X" ;
					newin = newin - 10;
				}
				else if(newin == 9)
				{
					cout << "IX" ;
					return 0;
				}
				else if(newin >= 5)
				{
					cout << "V" ;
					newin = newin - 5;
				}
				else if(newin == 4)
				{
					cout << "IV" ;
					return 0;
				}
				else if(newin >= 1)
				{
					cout << "I" ;
					newin = newin - 1;
				}
			}
		}
    }
    else
    {
    	cout << "Error" ;
	}
}
