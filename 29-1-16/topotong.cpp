#include<iostream>
#include<list>
#include<queue>

using namespace std;

int main()
{
	int graph,n,m;
	cin>>graph;
	for(int i=0;i<graph;i++)
	{
		cin>>n>>m;
		
		int degree[n+1];
		
		for(int j=1;j<=n;j++)
		{
			degree[j] = 0;
		}
		
        list<int>adj[n+1];
		for(int j=1;j<=m;j++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            degree[v]++;
        }
        
        bool active[n+1];
		for(int j=1;j<=n+1;j++)
		{
			active[j] = false;
		}
			
		vector<int>ans;
		
		int a=1;
		while(a<n+1)
		{
			if(degree[a] == 0 && active[a] == false)
            {
				int b = a;
                a = 0;
                ans.push_back(b);
                
                if(!active[b])
                {
                    active[b] = true;
                    for(list<int>::iterator j=adj[b].begin();j!=adj[b].end();j++)
                    {
                        int pass = *j;
                        degree[pass]--;
                    }
                }
            }
            a++;
		}

		if(ans.size() == 0)
        {
            cout<<"NOT DAG"<<"\n";
        }
        else
		{
        	for(int j=0;j<ans.size();j++)
            {
                if(ans.size()!= n)
                {
                    cout<<"NOT DAG"<<"\n";
                    break;
                }
                else
				{
                    cout<<ans[j]<<" ";
                }
            }
        }
	}		
}

