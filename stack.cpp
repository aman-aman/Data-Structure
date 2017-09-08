#include<bits/stdc++.h>
using namespace std;
//amanjha1
//implementation of stack using stl
int main ()
{
    stack <int> st;
    int n,element;
    cout<<"enter the size of stack: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>element;
    	st.push(element);
    }
	while(!st.empty())
	{
		int a=st.top();
		cout<<a<<"\n";
		st.pop();
	}
}
