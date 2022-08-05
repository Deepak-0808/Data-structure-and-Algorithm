//876. Middle of the Linked List

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        int length=0;
        while(temp){
            length++;
            temp = temp->next;
        }
        
        int mid=length/2;
        temp=head;
        if(length%2==0)
        {
            while(mid--)
            {
                temp=temp->next;
            }
            return temp;
        }
        else
        {
            while(mid--)
            {
                temp=temp->next;
            }
            return temp;
        }
    return temp; 
    }
};
