Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* temp1=head1;
    Node* temp2=head2;
    Node* ans=new Node(1);
    Node* temp3=ans;
    while(temp1&&temp2)
    {
        if(temp1->data==temp2->data)
        {
            Node* valInsert=new Node(temp1->data);
            temp3->next=valInsert;
            temp3=temp3->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if(temp1->data<temp2->data)
        {
            temp1=temp1->next;
        }
        else
        {
            temp2=temp2->next;
        }
    }
    return ans->next;
}
