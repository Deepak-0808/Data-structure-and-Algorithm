#include <bits/stdc++.h>
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
    temp->right = NULL;
    temp->key = key;
    return temp;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}

struct node *search_bst(struct node *root, int data)
{
    if (root == NULL)
        return NULL;
    else if (root->key == data)
    {
        cout << "Search successful" << endl;
        return root;
    }
    else if (data < root->key)
        return search_bst(root->left, data);
    else
        return search_bst(root->right, data);
}

void insertion(node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->key)
        {
            cout<<key<<" is already in bst"<<endl;
            return;
        }
        else if (key < root->key)
            root = root->left;
        else
            root = root->right;
    }

    if (key < prev->key)
        prev->left = createnode(key);
    else
        prev->right = createnode(key);
}

int main()
{

    struct node *root = createnode(15);
    struct node *root1 = createnode(20);
    struct node *root2 = createnode(2);
    struct node *root3 = createnode(80);
    struct node *root4 = createnode(1);
    struct node *root5 = createnode(13);
    struct node *root6 = createnode(17);

    root->left = root2;
    root->right = root1;
    root1->left = root6;
    root1->right = root3;
    root2->left = root4;
    root2->right = root5;

    insertion(root, 20);

    // cout<<root->right->right->right->key;

    struct node *p = search_bst(root, 20);
    if (p == NULL)
        cout << "Search Unsuccessful" << endl;

    return 0;
}