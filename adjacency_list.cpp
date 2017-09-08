#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter the no of vertex\n";
	cin>>n;
	cout<<"enter the number of edges\n";
	cin>>m;
	vector<list<int>> adj(n);
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
	}
	for(int i=0;i<n;i++)
	{
		cout<<i;
		list<int>::iterator it=adj[i].begin();
		while(it!=adj[i].end())
		{
			cout<<"->"<<*it;
			++it;
		}
		cout<<"\n";
	}	
}
