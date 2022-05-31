// #include <bits/stdc++.h>
// using namespace std;

// struct node
// {
//     int data;
//     struct node *link;
// };
// struct node *START = NULL;

// struct node *creatnode()
// {
//     struct node *p;
//     p = (struct node *)malloc(sizeof(struct node));
//     return (p);
// }

// void insertnode(int n)
// {
//     int a = n;
//     struct node *temp, *p;

//     temp = creatnode();
//     cout << "Enter the value in " << a << " linked list:- " << endl;
//     cin >> temp->data;
//     temp->link = NULL;
//     if (START == NULL)
//         START = temp;
//     else
//     {
//         p = START;
//         while (p->link != NULL)
//         {
//             p = p->link;
//         }
//         p->link = temp;
//     }
// }

// int main()
// {
//     int t;
//     struct node *m;
//     cout << "Enter the number of linkedlist:- ";
//     cin >> t;
//     for (int i = 1; i <= t; i++)
//     {
//         insertnode(i);
//     }

//     m = START;
//     while (m->link != NULL)
//     {
//         cout << m->data << endl;
//         m = m->link;
//     }
//     cout << m->data << endl;

//     return 0;
// }







#include<bits/stdc++.h> 
using namespace std;

struct node 
{
    int data;
    struct node *link;
};
struct node *start=NULL;

struct node *createnode()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->link=NULL;
    return temp;
}

void insertnode(int i)
{
    struct node *n,*check;
    n=createnode();
    cout<<"Enter the value in "<<i<<" node:- "<<endl;
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


int main(){
    int t;
    struct node *v;
    cout<<"Enter the number of linkedlist:- ";
    cin>>t;
    for(int i=1;i<=t;i++)
    insertnode(i);
    
    v=start;
    cout<<"You entered this value"<<endl;
    while(t--)
    {
      cout<<v->data<<" ";
        v=v->link;
    }
          
    return 0;
}