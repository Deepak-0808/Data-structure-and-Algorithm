class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        int n=0;
        while(temp)
        {
            n++;
            temp=temp->next;
        }
        
        if(n==1)
            return NULL;
        
        temp=head;
        for(int i=0;i<(n/2)-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        
        return head;
    }
};
