#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *head = NULL;

void display(node *d)
{
    cout << "\nThe Linked List : ";
    while (d != NULL)
    {
        cout << d->data << " ";
        d = d->next;
    }
}
void insertAtStart(int data)
{
    node *temp = new node();
    temp->data = data;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}
void insertAtEnd(int data)
{
    node *temp = new node();
    temp->data = data;
    if (head == NULL)
    {
        head == temp;
    }
    else
    {
        node *tail = new node();
        tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        tail->next = temp;
        temp->next = NULL;
    }
}
void insertAtMidle(int data, int pos)
{
    node *temp = new node();
    temp->data = data;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *traverse = new node();
        traverse = head;
        while (pos != 1)
        {
            traverse = traverse->next;
            pos--;
        }

        temp->next = traverse->next;
        traverse->next = temp;
    }
}
void deleteMiddle(int pos)
{
    node *previous = new node();
    node *current = new node();
    current = head;
    if (head == NULL)
    {
        cout << "\nLinked List is empty";
    }
    else if (pos == 1)
    {
        node *temp = new node();
        temp = head;
        head = head->next;
        delete (temp);
    }

    else
    {
        while (pos != 1)
        {
            previous = current;
            current = current->next;
            pos--;
        }
        previous->next = current->next;
        delete (current);
    }
}

int main(void)
{
    insertAtStart(120);
    insertAtStart(110);
    insertAtEnd(100);
    insertAtEnd(90);
    // display(head);
    insertAtMidle(5, 2); //2 is the postition
    // insertAtMidle(15, 4);
    // display(head);
    deleteMiddle(5);
    // insertAtEnd(60);
    display(head);
}