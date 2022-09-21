class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_set<int> set2;
        Node* temp1=head1;
        Node* temp2=head2;
        int count=0;
        
        while(temp2)
        {
            set2.insert(temp2->data);
            temp2=temp2->next;
        }
        
        temp1=head1;
        while(temp1)
        {
            if(set2.find(x-temp1->data)!=set2.end())
            {
                count++;
            }
              temp1=temp1->next;
        }
        return count;
        
    }
};
