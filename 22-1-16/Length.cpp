#include<iostream>

using namespace std;

int main()
{
	int M[1000], Y[1000], F[1000], I[1000], M1[1000], Y1[1000], F1[1000], I1[1000],  count, Mans, Yans, Fans, Ians, M1ans, Y1ans, F1ans, I1ans;
	cin >> count;
	for (int i = 0; i < count; ++i)
	{
		cin >> M[i] >> Y[i] >> F[i] >> I[i];
		cin >> M1[i] >> Y1[i] >> F1[i] >> I1[i];
		
		Y[i]=(M[i]*1760)+Y[i];
		M[i]=0;
		
		F[i]=(Y[i]*3)+F[i];
		Y[i]=0;
		
		I[i]=(F[i]*12)+I[i];
		F[i]=0;
		
		Y1[i]=(M1[i]*1760)+Y1[i];
		M1[i]=0;
		
		F1[i]=(Y1[i]*3)+F1[i];
		Y1[i]=0;
		
		I1[i]=(F1[i]*12)+I1[i];
		F1[i]=0;
	
		I[i]=I1[i]-I[i];
		
		F[i]=I[i]/12;
		I[i]=I[i]%12;
		
		Y[i]=F[i]/3;
		F[i]=F[i]%3;
		
		M[i]=Y[i]/1760;
		Y[i]=Y[i]%1760;
	
		/*F1ans=I1ans/12;
		I1ans=I1ans%12;
		
		Y1ans=F1ans/3;
		F1ans=F1ans%3;
		
		M1ans=Y1ans/1760;
		Y1ans=Y1ans%1760;*/
		
	}
	
	for (int i = 0; i < count; ++i)
	{
			cout << M[i] << " " << Y[i] << " " << F[i] << " " << I[i] << "\n";	
	}
}
