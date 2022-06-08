/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    
void printInorder(TreeNode* original, TreeNode* cloned, TreeNode* target,TreeNode*& ans)  
{  
    if(original==NULL) 
        return;
    if (target == original)  
        ans= cloned;  
    printInorder(original->left,cloned->left,target,ans);  
    printInorder(original->right,cloned->right,target,ans);  
        
    return;
};  
    
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans = NULL;
        printInorder(original, cloned, target,ans) ;
        return ans;
    }
      
};

  

 

