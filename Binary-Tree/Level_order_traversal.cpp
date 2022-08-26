class Solution
{
public:
    // Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node *node)
    {
        // Your code here
        vector<int> vect;
        if (node == NULL)
            return vect;
        queue<Node *> q;
        q.push(node);
        while (!q.empty())
        {
            Node *t = q.front();
            vect.push_back(t->data);
            if (t->left)
                q.push(t->left);
            if (t->right)
                q.push(t->right);
            q.pop();
        }

        return vect;
    }
};
