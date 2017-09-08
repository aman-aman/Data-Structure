#include <bits/stdc++.h>
using namespace std;
//aman kumar jha
void showpq(priority_queue <int> gq)
{
    priority_queue <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}
int main ()
{
    int n,a;
    priority_queue <int> pq;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        pq.push(a);
    }
    showpq(pq);
    cout <<pq.top();
    pq.pop();
    showpq(pq);
}
