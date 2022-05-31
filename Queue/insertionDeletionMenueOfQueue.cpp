#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int front;
    int rare;
    int capacity;
    int *arr;
};

Queue *createqueue(int size)
{
    Queue *temp;
    temp = (Queue *)malloc(sizeof(Queue));
    temp->front = -1;
    temp->rare = -1;
    temp->capacity = size;
    temp->arr = (int *)malloc(temp->capacity * sizeof(int));
    return (temp);
}
int isfull(struct Queue *Q)
{
    if ((Q->rare + 1) % Q->capacity == Q->front)
        return 1;
    else
        return 0;
}

void enqueue(struct Queue *Q, int value)
{
    if (isfull(Q))
        cout << "Queue is full" << endl;
    else
    {

        Q->rare = (Q->rare + 1) % Q->capacity;
        Q->arr[Q->rare] = value;
        if (Q->front == -1)
            Q->front++;
    }
}

int isempty(struct Queue *Q)
{
    if (Q->front == -1)
        return 1;
    else
        return 0;
}

int dequeue(struct Queue *Q)
{
    int rvalue = -1;
    if (isempty(Q))
    {
        cout << "Queue is empty" << endl;
        return (-1);
    }
    else
    {
        rvalue = Q->arr[Q->front];
        if (Q->front == Q->rare)
            Q->front = Q->rare = -1;
        else
            Q->front = (Q->front + 1) % Q->capacity;
    }
    return rvalue;
}

int queuecapacity(struct Queue *Q)
{
    return (Q->capacity);
}

void deleteQueue(struct Queue *Q)
{
    free(Q->arr);
    free(Q);
    cout << "**** Queue is Deleted ****" << endl;
}

int main()
{
    Queue *Q;
    int choice, value1, value2;
    Q = createqueue(5);
    cout << "Deepak Kumar"
         << "20BCS5391" << endl;

    cout << "Capacity of Queue is" << queuecapacity(Q) << endl;

    while (1)
    {
        cout << endl
             << "1 Ensert value " << endl;
        cout << "2 Delete value From Queue " << endl;
        cout << "3 Delete Queue " << endl;
        cout << "4 Exit" << endl
             << endl;
        cout << "***** Enter your choice *****" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value" << endl;
            cin >> value1;
            enqueue(Q, value1);
            break;
        case 2:
            value2 = dequeue(Q);
            cout << "*** " << value2 << " is deleted ***" << endl;
            break;
        case 3:
            deleteQueue(Q);
            return 0;
        case 4:
            return 0;

        default:
            cout << "Enter the valid choice" << endl;
            break;
        }
    }

    return 0;
}