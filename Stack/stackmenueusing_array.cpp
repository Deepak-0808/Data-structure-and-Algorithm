#include<bits/stdc++.h> 
using namespace std;

struct mystack
{
    int top;
    int size;
    int *arr;
};

struct mystack *creatstack()
{
    struct mystack *addofstack;
    int Ssize;
    cout<<"Enter the size of stack"<<endl;
    cin>>Ssize;
    addofstack=(struct mystack*)malloc(sizeof(struct mystack));
    addofstack->top=-1;
    addofstack->size=Ssize;
    addofstack->arr=(int*)malloc(sizeof(int)*Ssize);
    return addofstack;
}
int isempty(struct mystack *addofstack)
{
    if(addofstack->top==addofstack->size-1)
    return 1;
    else
    return 0;
}
int isfull(struct mystack *addofstack)
{
    if(addofstack->top==-1)
    return 1;
    else
    return 0;
}
void push(struct mystack *addofstack, int data )
{
    if(!isempty(addofstack))
    {
        addofstack->top++;
        addofstack->arr[addofstack->top]=data;      
    }
    else
    cout<<"Stack is full"<<endl;
}
void pop(struct mystack *addofstack)
{
    if(!isfull(addofstack))
    {
       int value;
       value=addofstack->arr[addofstack->top];
       addofstack->top--;
       cout<<"********"<<value<<" is succesfully deleted ********"<<endl;
    } 
    else
    cout<<"******** Stack is empty ********"<<endl; 
}
void view(struct mystack *addofstack)
{
    if(addofstack==0)
    cout<<"******** Stack is not created ********"<<endl;
    else if(!isfull(addofstack))
    {
        cout<<"****** cureent value in the stack :-->>> "<<endl;
        for(int i=addofstack->top;i>=0;i--)
        {
           cout<<addofstack->arr[i]<<endl;
        }
        
    }
     else
     cout<<"******** Stack is empty ********"<<endl;
}



int main(){
    struct mystack *stackaddres=0;
    int value;
    while(1)
    {
       int choice;
       cout<<endl<<endl;
       cout<<"1. Create stack"<<endl;
       cout<<"2. Push the value in stack"<<endl;
       cout<<"3. Pop the value from stack"<<endl;
       cout<<"4. View cureent value in the stack"<<endl;
       cout<<"5. Exite"<<endl; 
       cout<<"**** Enter your Choice ****"<<endl;
       cin>>choice;
       switch (choice)
       {
       case 1:
           stackaddres=creatstack();
           break;
       case 2:
            cout<<"Enter the value in stack"<<endl;
            cin>>value;
            push(stackaddres,value);
            break;
       case 3:
            pop(stackaddres); 
            break;
       case 4:
            view(stackaddres);  
            break;
       case 5:
            return 0; 
               
       
       default:
           cout<<"Enter valid choice"<<endl;
           break;
       }

    }   

    
    return 0;
}