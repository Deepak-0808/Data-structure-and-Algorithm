// Check for BST 

class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    vector<int>ans;
    void inorder(Node* root)
    {
       if(root != NULL)
       {
           inorder(root->left);
           ans.push_back(root->data);
           inorder(root->right);
       }
    }
    bool isBST(Node* root) 
    {
        // Your code here
        inorder(root);
        for(int i=0;i<ans.size()-1;i++)
        {
           if(ans[i]>ans[i+1])
           return false;
        }
       return true;
    }
};
