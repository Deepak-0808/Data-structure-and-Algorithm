#include <bits/stdc++.h>
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
    temp->link = NULL;
    return temp;
}

void insertnode()
{
    struct node *new_node_addres, *check;
    new_node_addres = createnode();
    cout << "Enter the value in "
         << " node:- " << endl;
    cin >> new_node_addres->data;
    if (start == NULL)
        start = new_node_addres;
    else
    {
        check = start;
        while (check->link != NULL)
        {
            check = check->link;
        }
        check->link = new_node_addres;
    }
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

void deletenode()
{
    struct node *check;
    if (start == NULL)
        cout << "List is empty" << endl;
    else
    {
        check = start;
        check = check->link;
        free(start);
        start = check;
    cout << "The first node is deleted successfully." << endl;
    }
}

int main()
{
    int x;

    while (1)
    {
        cout << endl << endl << "Enter 1 for create new node" << endl;
        cout << "Enter 2 for view node" << endl;
        cout << "Enter 3 for delete first node" << endl;
        cout << "Enter 4 for exit" << endl;
        cout << endl << "Enter your choice:- ";
        cin >> x;
        switch (x)
        {
        case 1:
            insertnode();
            break;
        case 2:
            viewnode();
            break;
        case 3:
            deletenode();
            break;
        case 4:
            return 0;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}