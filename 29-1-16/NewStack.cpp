#include<iostream>
#include<list>

using namespace std;

int main()
{
	std::list<int>rec;
	
	int count = 0 ;
	string ord = "IN";
	while(ord!="END")
	{
		cin >> ord;
		if(ord == "PUS" || ord == "ENQ")
		{
			count++;
			int value;
			cin >> value;
			rec.push_back(value);
		}
		else if(ord == "POP")
		{
			count--;
			rec.pop_back();
		}
		else if(ord == "DEQ")
		{
			count--;
			rec.pop_front();
		}
	}
	if(count != 0)
	{
		std::cout << count << " "<< rec.back() << " " << rec.front() ;
	}
	else
	{
		cout << "Empty";
	}
}
