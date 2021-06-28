#include <iostream>
using namespace std;

struct queue
{
    int data;
    queue *next;
};

queue *front = NULL;
queue *rear = NULL;

void Enqueue()
{
    queue *temp = new queue();
    cout << "Enter Data" << endl;
    cin >> temp->data;

    if (front == NULL)
    {
        rear = temp;
        front = temp;
        return;
    }
    else
    {
        rear->next = temp;
        temp->next = NULL;
        rear = temp;
    }
}
void Dequeue()
{

    if (front == NULL)
    {
        cout << "Queue empty " << endl;
    }
    else
    {
        queue *tail = new queue();

        tail = front;
        front = front->next;
        cout << "Deleted : " << endl;
        delete (tail);
    }
}

void display()
{
    cout << "Queue : " << endl;
    if (front == NULL)
    {
        cout << "Empty Queue" << endl;
    }
    else
    {
        queue *tail = new queue();
        tail = front;
        while (tail != NULL)
        {
            cout << tail->data << " ";
            tail = tail->next;
        }
    }
}
void peek()
{
    if (front == NULL)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        cout << "Front : " << front->data << endl;
    }
}
void isEmpty()
{
    if (front == NULL)
    {
        cout << "Yes the QUEUE is Empty" << endl;
    }
    else
    {
        cout << "No, the QUEUE is not Empty" << endl;
    }
}
int main(void)
{
    char ch;

    do
    {
        cout << "_________________________________________________________" << endl;
        cout << "\t1 for Enqueue" << endl;
        cout << "\t2 for Dequeue" << endl;
        cout << "\t3 for Display" << endl;
        cout << "\t4 for Peek" << endl;
        cout << "\t5 for Check Empty" << endl;
        cout << "\tQ to Quit" << endl;
        cout << "Enter Your Choice ";
        cin >> ch;
        switch (ch)
        {
        case '1':
            Enqueue();
            break;
        case '2':
            Dequeue();
            break;
        case '3':
            display();
            break;
        case '4':
            peek();
            break;
        case '5':
            isEmpty();
            break;
        }
    } while (ch != 'q');
}