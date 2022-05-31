#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;

struct node *createnode()
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(node));
    ptr->link = NULL;
    return ptr;
}

int isempty()
{
    if (top == NULL)
        return 1;
    else
        return 0;
}

void push(int value)
{
    struct node *temp, *n;
    temp = createnode();
    temp->data = value;
    if (isempty())
        top = temp;
    else
    {
        n = top;
        top = temp;
        top->link = n;
    }
}

void view()
{
    struct node *temp;
    temp = top;
    if (isempty())
        cout << "*** Stack is empty ***" << endl;
    else
    {
        cout<<"*** Value in the stack are:- ***"<<endl;
        while (temp->link != NULL)
        {
            cout << temp->data << endl;
            temp=temp->link;
        }
        cout << temp->data << endl;
    }
}

void pop()
{
    struct node *temp;
    if (isempty())
        cout << "*** Stack is empty ***" << endl;
    else
    {
        int del = top->data;
        temp = top->link;
        free(top);
        top = temp;
        cout <<"*** "<< del << " is poped from stack ***" << endl;
    }
}

int main()
{
    int value;
    while (1)
    {
        int choice;
        cout << endl
             << endl;
        cout << "1. Push the value in stack" << endl;
        cout << "2. View cureent value in the stack" << endl;
        cout << "3. pop the value from stack" << endl;
        cout << "4. Exite" << endl;
        cout << "**** Enter your Choice ****" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value in stack" << endl;
            cin >> value;
            push(value);
            break;
        case 2:
            view();
            break;
        case 3:
            pop();
            break;
        case 4:
            return 0;

        default:
            cout << "Enter valid choice" << endl;
            break;
        }
    }

    return 0;
}