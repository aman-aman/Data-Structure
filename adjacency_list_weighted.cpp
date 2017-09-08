#include<bits/stdc++.h>
using namespace std;

long long main()
{
	long long n;
	cout<<"enter the no of vertex\n";
	cin>>n;
	//ALL THE WAY OF DECLARATION GIVEN BELOW IS CORRECT
	//
	//
	//vector<pair<long long,int>> adj[10] ; but in this way you need to declare the size if
	// u not declare the size then will be unable to use the function push_back
	//
	//another way--- same explanation here alse for push_back
	//typedef pair<int,int> pi;
	//vector<pi> adj[10];
	//

	vector<list<pair<int,int> > > adj(n);
	for(int i=0;i<n;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		if(u<v)
			adj[u].push_back(make_pair(v,w));
		else swap(u,v); adj[v].push_back(make_pair(v,w));
	}
	for(int i=0;i<n;i++)
	{
		cout<<i;
		list<pair<int,int> >::iterator it=adj[i].begin();
		while(it!=adj[i].end())
		{
			cout<<"--("<<(*it).second<<")>>"<<(*it).first;
			++it;
		}
		cout<<"\n";
	}


}
