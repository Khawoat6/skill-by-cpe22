#include <iostream>
#include <stdio.h>
#include <list>
#include <queue>
using namespace std ;

int main()
{
	int t ;
	cin >> t ;
	for(int i = 0 ; i < t ; i++)
	{
		int n, m ;
		cin >> n >> m ;
		// degree
		int degree[n+1] ;
		for(int j = 1 ; j < n+1 ; j++)
		{
			degree[j] = 0 ;
		}
		// input
		list<int> adj[n+1] ;
		for(int j = 1 ; j < m+1 ; j++)
		{
			int u, v ;
			cin >> u >> v ;
			adj[u].push_back(v) ;
			degree[v]++ ;	
		}
		// check passed
		bool active[n+1];
		for(int j = 1 ; j <= n+1 ; j++)
		{
			active[j] = false;
		}
		// topological
		vector<int> answer ;
		int b = 1 ;
		while(b < n+1)
		{
			if(degree[b] == 0 && active[b] == false)
			{
				int u = b ;
				b = 0 ;
				answer.push_back(u) ;
				if(!active[u])
				{
					active[u] = true ;
					for(list<int>::iterator j = adj[u].begin() ; j != adj[u].end() ; j++)
					{
						int pass = *j ;
						degree[pass]-- ;
					}
				}
			}
			b++ ;
		}
		//cout << endl ;
		// DAG & answer
		if(answer.size() == 0)
		{
			cout << "NOT DAG" << endl ;	
		} 
		else if(answer.size() != 0)
		{
			for(int j = 0 ; j < answer.size() ; j++)
			{
				if(answer.size() != n)
				{
					cout << "NOT DAG" << endl ;
					break ; 
				}
				else
				{
					cout << answer[j] << " " ;
				}
			}
		}
		//cout << endl ;
	}
}
