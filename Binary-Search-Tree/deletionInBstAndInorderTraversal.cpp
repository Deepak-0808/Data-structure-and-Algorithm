#include <iostream>
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
        cout << "Search succesful" << endl;
        return root;
    }
    else if (data < root->key)
        return search_bst(root->left, data);
    else
        return search_bst(root->right, data);
}

struct node *findmax(node *root)
{
    while (root->right != NULL)
        root = root->right;

    return root;
}

struct node *deleteinbst(node *root, int key)
{
    node *temp = NULL;

    if (root == NULL)
    {
        return NULL;
    }
    else if(root->left==NULL&&root->right==NULL)
    {
        free(root);
        return NULL;

    }

    else if (key < root->key)
    {
        root->left = deleteinbst(root->left, key);
    }
    else if (key > root->key)
    {
        root->right = deleteinbst(root->right, key);
    }
    else // element found
    {
        if (root->left && root->right) // two children
        {
            temp = findmax(root->left);
            root->key = temp->key;
            root->left = deleteinbst(root->left, root->key);
        }
        else // one or none child
        {
            temp = root;
            if (root->left == NULL)
                root = root->right;
            if (root->right == NULL)
                root = root->left;
            free(temp);
        }
    }

    return root;
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

    //  struct node *p=search_bst(root,13);
    //  if(p==NULL)
    //  cout<<"Search Unsuccesful"<<endl;

    inorder(root);
    cout << endl;
    deleteinbst(root, 2);
    inorder(root);

    return 0;
}