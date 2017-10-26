#include<bits/stdc++.h>
using namespace std;
#define ll long long
//aman kumar jha
struct node
{
	ll data;
	node *left;
	node *right;
};
node *getnode(ll data)
{
	node *temp=new node();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node *insert(node *root,ll data)
{
	if(root==NULL)
	{
		root=getnode(data);
	}
	else
	{
		if (data<=root->data)
			root->left=insert(root->left,data);
		else
			root->right=insert(root->right,data);
		return root;
	}
}
void inorder(node *root)
{

    if (root != NULL)
    {
        inorder(root->left);
        printf("%lld \n", root->data);
        inorder(root->right);
    }
}


int main()
{
    node *root=new node();
    ll n,x,y;
    scanf("%lld",&n);
    ll a;
    for(ll i=0;i<n;i++)
	{
		scanf("%lld",&a);
		if(i==0)
			root=insert(root,a);
		else
			insert(root,a);
	}
	inorder(root);

}
