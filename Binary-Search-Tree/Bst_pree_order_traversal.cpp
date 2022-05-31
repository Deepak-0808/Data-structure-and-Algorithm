#include<bits/stdc++.h> 
using namespace std;

struct node
{
    int key;
    struct node *left;
    struct node *right;

};

struct node *createnode(int key)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->left = NULL;
    temp->right=NULL;
    temp->key=key;
    return temp;
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}


int main(){
     
     struct node *root=createnode(10);
     struct node *root1=createnode(20);
     struct node *root2=createnode(2);
     struct node *root3=createnode(80);
     struct node *root4=createnode(1);
     struct node *root5=createnode(13);
     struct node *root6=createnode(11);
     
     root->left=root1;
     root->right=root2;
     root1->left=root3;
     root1->right=root4;
     root2->left=root5;
     root2->right=root6;
     preorder(root);
     

    return 0;
}