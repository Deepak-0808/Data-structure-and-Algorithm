#include<bits/stdc++.h> 
using namespace std;
#define size 5
int top=-1;
int arr[size];
void push(int data)
{
    if(top==size-1)
    {
    cout<<"Stack is full"<<endl;
    return;
    }

    top++;
    arr[top]=data;
}
int pop()
{
    int value;
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
        exit(1);
    }
    else
    {
        value=arr[top];
        top=top-1;
    }
    return value;
}
  
int main(){
    int value;
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    value=pop();
    cout<<value<<" is deleted"<<endl;    
    
    
    for(int i=top;i>=0;i--)
    cout<<arr[i]<<endl;             
    
    
    return 0;
}