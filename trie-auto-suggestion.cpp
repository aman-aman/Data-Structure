#include<bits/stdc++.h>
using namespace std;
struct trie
{
    bool isend;
    unordered_map<char,int> mp;
    trie()
    {
        isend=false;
        for(char i='a';i<='z';i++)
            mp[i]=-1;
    }
};
vector<trie > tree;

void add(int head,string s)
{
    int pos=head;
    cout<<"insert : "<<s<<"\n";
    for(int i=0;i<s.size();i++)
    {
        if(tree[pos].mp[s[i]]==-1)
        {
            tree[pos].mp[s[i]]=tree.size();
            tree.push_back(trie());
        }
        pos=tree[pos].mp[s[i]];
    }
    tree[pos].isend=true;
    return ;
}
bool search(string s)
{
    int pos=0;
    for(int i=0;i<s.size();i++)
    {
        if(tree[pos].mp[s[i]]==-1)
        {
            return false;
        }
        pos=tree[pos].mp[s[i]];
    }
    return true;
}
void dfs(int pos,string prefix,vector<string > &ans,unordered_map<string,int> &visited)
{
    visited[prefix]=1;
    if(tree[pos].isend)
        ans.push_back(prefix);

    for(char ch='a';ch<='z';ch++)
    {
            if(tree[pos].mp[ch]!=-1&&visited.find(prefix+ch)==visited.end())
            {
                int t_pos=pos;
                prefix.push_back(ch);
                dfs(tree[pos].mp[ch],prefix,ans,visited);
                pos=t_pos;
                prefix.pop_back();
            }
    }
}
pair<string,int> getprefix(string &s)
{
    int pos=0;
    string prefix;
    for(int i=0;i<s.size();i++)
    {
        if(tree[pos].mp[s[i]]==-1)
            break;

        prefix.push_back(s[i]);
        pos=tree[pos].mp[s[i]];
    }
    return {prefix,pos};
}
void solve()
{
    vector<string> input={"aman","jha","lenovo","sprite","ams","length","raman","ankit","lengthy","lefty"};
    for(int i=0;i<input.size();i++)
    {
        add(0,input[i]);
    }
    vector<string> autosuggest={"am","len","an","lef"};
    for(int i=0;i<autosuggest.size();i++)
    {
        pair<string,int> p=getprefix(autosuggest[i]);
        if(p.second!=-1)
        {
            vector<string> output;
            unordered_map<string,int> visited;
            dfs(p.second,autosuggest[i],output,visited);
            cout<<"key : "<<autosuggest[i]<<"\n";
            for(auto c:output)
                cout<<c<<" , ";
            cout<<"\n";
        }
    }
}
int main()
{
    tree.clear();
    tree.push_back(trie());
    solve();
}
