#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
struct node
{
	int data;
	node *left;
	node *right;
};
node* insert(int data)
{
	node *temp=new node();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
int main()
{
	/*
			 1
			/ \
		   2   3
		  /\
		 4  5

	*/
    node *root=new node();
    int a[5]={1,2,3,4,5};
    root=insert(1);
    root->left=insert(2);
    root->right=insert(3);
    root->left->left=insert(4);
    root->left->right=insert(5);

}
