#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,u;
    cin>>m;
    queue<int>q;
    for(int i=0;i<m;i++)
    {
        cin>>u;
        q.push(u);
    }
    cout<<q.size()<<"\n";
    while(!q.empty())
    {
        int t=q.front();
        cout<<t<<" ";
        q.pop();
    }
}

