// 92. Reverse Linked List II



class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int> stack;
        ListNode* temp=head;
        if(left==right)
            return head;
        else
        {
            for(int i=0;i<right;i++)
            {
                
                if(i>=left-1)
                {
                    stack.push(temp->val);
                }
                temp=temp->next;
            }
            temp=head;
            for(int j=0;j<right;j++)
            {   
                if(j>=left-1)
                {
                    temp->val=stack.top();
                    stack.pop();
                }
                temp=temp->next;
            }
        }
        return head;
    }
};
