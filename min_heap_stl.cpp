#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,greater<int>>pq;
	for(int i=0;i<10;i++)
	{
		int a=(rand()%100);
		pq.push(a);
		cout<<i+1<<" value pushed : "<<a<<"\n";
	}
	for(int i=0;i<10;i++)
	{
		cout<<pq.top()<<"\n";
		pq.pop();
	}
}
