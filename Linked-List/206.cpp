//206. Reverse Linked List

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp,*prev=NULL,*current=head;
        while(current!=NULL)
        {
            temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        return prev;
    }
};
