/*
aman kumar jha
*/
#include<bits/stdc++.h>
using namespace std;

//Node of the tree
struct trienode
{
    struct trienode *child[26];
    bool isend;
};

//Creating node of the tree
struct trienode* getnode()
{
    trienode *p=new trienode();
    for(int i=0;i<26;i++)
        p->child[i]=NULL;
    p->isend=false;
    return p;
}

//Inserting the string into the tree
void insert(struct trienode *root,string key)
{
    struct trienode *p=root;
    for(int i=0;i<key.length();i++)
    {
        int index=key[i]-'a';
        if(!p->child[index])
            p->child[index]=getnode();
        p=p->child[index];
    }
    p->isend=true;
}

//Searching the string in the tree
bool search(struct trienode *root,string key)
{
    struct trienode *p=root;
    for(int i=0;i<key.length();i++)
    {
        int index=key[i]-'a';
        if(!p->child[index])
            return false;
        p=p->child[index];
    }
    return (p!=NULL&&p->isend);
}

int main()
{
    trienode *root=getnode();
    int n;
    cout<<"Enter the number of string to enter: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        insert(root,s);
    }
    string str;
    cout<<"\nEnter the string to search: ";
    cin>>str;
    if(search(root,str))
        cout<<"Found!!!\n";
    else
        cout<<"Not Found\n";
}
