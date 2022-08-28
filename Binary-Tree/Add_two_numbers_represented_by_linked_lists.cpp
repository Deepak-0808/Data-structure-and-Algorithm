class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    // reverse function
    struct Node* reverse(struct Node* head)
    {
        if(head==NULL||head->next==NULL)
        return head;
         
        struct Node* newHead=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return newHead;
    }
    
    // insert function at the end
     void insertAtTell(struct Node* &head,struct Node* &tell,int val)
     {
         struct Node* temp=new Node(val);
         if(head==NULL)
         {
             head=temp;
             tell=temp;
             return;
         }
         else
         {
             tell->next=temp;
             tell=temp;
         }
     }
    

    struct Node* add(struct Node* first,struct Node* second)
    {
        int carry=0;
        
        struct Node* ansHead=NULL;
        struct Node* ansTell=NULL;
        while(first!=NULL||second!=NULL||carry!=0)
        {
            
            int val1=0,val2=0;
            
            if(first!=NULL)
            val1=first->data;
            if(second!=NULL)
            val2=second->data;
            
            int sum=val1+val2+carry;
            int digit=sum%10;
            
            insertAtTell(ansHead,ansTell,digit);
            
            carry=sum/10;
            
            
            
            if(first!=NULL)
            first=first->next;
            if(second!=NULL)
            second=second->next;
            
        }
        return ansHead;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first =reverse(first);
        second =reverse(second);
        
        struct Node* ans=add(first,second);
        
        ans=reverse(ans);
        
        return ans;

        
    }
};
