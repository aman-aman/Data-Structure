#include <bits/stdc++.h>
using namespace std;
//aman kumar jha
void showpq(priority_queue <int> gq)
{
    priority_queue <int> mhp = gq;
    while (!mhp.empty())
    {
        cout<<" "<<mhp.top()<<" ";
        mhp.pop();
    }
    cout<<"\n";
}
int main ()
{
    int n,a;
    priority_queue <int> maxheap;
    cout<<"Enter the size of heap: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        maxheap.push(a);
    }
    showpq(maxheap);
    cout <<maxheap.top();
    maxheap.pop();
    showpq(maxheap);
}
