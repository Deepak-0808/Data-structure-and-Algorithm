#include<bits/stdc++.h> 
using namespace std;

struct node
{
    int data;
    struct node *link;
};

struct node *start = NULL;

struct node *createnode()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->link=NULL;
    return temp;
}


void insertnode()
{
    struct node *n,*check;
    n=createnode();
    cout<<"Enter the value in node:- "<<endl;
    cin>>n->data;
    if(start==NULL)
    start=n;
    else{
        check=start;
        while(check->link!=NULL)
        {
            check=check->link;
        }
        check->link=n;

    }
}

void insertnode_at_given_position()
{
    int pos,value;
    struct node *addres,*b,*c;
    cout<<"Enter the position and value"<<endl;
    cin>>pos>>value;
    addres=createnode();
    b=start;
    pos--;
    while(pos!=1)
    {
       b=b->link;
       pos--;
    }
    c=b->link;
    b->link=addres;
    addres->link=c;
    addres->data=value;

}

void viewnode()
{
    struct node *check;
    if (start == NULL)
        cout << "List is empty";

    else
    {
        check = start;
        while (check->link != NULL)
        {
            cout << check->data << " ";
            check = check->link;
        }
        cout << check->data << endl;
    }
}


int main(){
    int t;
    struct node *v;
    cout<<"Enter the number of linkedlist:- ";
    cin>>t;
    for(int i=1;i<=t;i++)
    insertnode();
    insertnode_at_given_position();
    viewnode();

    return 0;
}