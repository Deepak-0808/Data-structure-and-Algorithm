//1669. Merge In Between Linked Lists


class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
      
        ListNode *temp1=list1, *temp2=list1;
        for(int i=0;i<a-1;i++)
        {
            temp1=temp1->next;
        }
        
     
         for(int i=0;i<b;i++)
        {
            temp2=temp2->next;
        }
        
        temp1->next=list2;
        while(list2->next!=NULL)
        {
            list2=list2->next;
        }
        list2->next=temp2->next;
        
        return list1;
        
        
    }
};
