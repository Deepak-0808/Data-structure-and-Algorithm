
//2130. Maximum Twin Sum of a Linked List

class Solution {
public:
    int pairSum(ListNode* head) {
        stack<int> stack;
        int n=0;
        int ans=0; 
        ListNode* temp=head;
        while(temp!=NULL)
        {
            n++;
            stack.push(temp->val);
            temp=temp->next;
        }
        
        temp=head;
        int i=0;
      
        while(temp!=NULL&&i<n/2)
        {
            if(temp->val+stack.top()>ans)
            {
                 ans=temp->val+stack.top();
            }
            stack.pop();
            temp=temp->next;
            
        }
        return ans;
        
    }
};
