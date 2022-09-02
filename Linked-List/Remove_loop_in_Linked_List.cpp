
#include<bits/stdc++.h>

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        if(head==NULL)
        return;
        
       Node* temp=head;
       Node* prev=NULL;
       unordered_map<Node*,int> mp;
          while(head!=NULL)
          {
              if(mp[head->next]) 
               head->next=NULL;
            mp[head]++;
            head=head->next;
           
          }
       return;
    }
};
