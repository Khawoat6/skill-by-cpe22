#include <iostream>
using namespace std;

int main()
{
	int a = 2 ;
    int ar[2] = {1,1};
    int ar2[2] ={1,1};
    int ar3[2] ={1,1};
    int ar4[1000] ;
    int ar5[1000] ;
    
    for (int j = 0 ; j != a ; j++  )
    {
    	for (int i = 0 ; ar[0] != 0 && ar[1] != 0 && ar2[0] != 0 && ar2[1] != 0 && ar3[0] != 0 && ar3[1] != 0 ; i++  )
    	{	
    		cin >> ar[0] >> ar[1] >>ar2[0] >>ar2[1] >>ar3[0] >>ar3[1];
			ar4[i]=(ar[1] + ar2[1]) - ar3[0];
			ar5[i]=(ar[0] + ar2[0]) - ar3[1];
			a = i;
    	}
    	cout << "Anna's won-loss record is " << ar4[j] << "-" <<  ar5[j] << "." << "\n";	
    }
}
