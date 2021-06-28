#include <iostream>
using namespace std;

struct node
{
    int data;
    node *prev;
    node *next;
};

node *head = NULL;

void display(node *d)
{
    cout << "Linked List : ";
    while (d != NULL)
    {
        cout << d->data << " ";

        d = d->next;
    }
    cout << endl;
}

void inserAtEnd(int data)
{
    node *temp = new node();
    temp->data = data;
    if (head == NULL)
    {
        head = temp;
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
        temp->prev = tail;
    }
}
void middle(int data, int pos)
{
    node *temp = new node();
    temp->data = data;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *tail = new node();
        node *tailNext = new node();
        tail = head;
        while (pos != 1)
        {
            tail = tail->next;
            pos--;
        }
        tailNext = tail->next;
        if (tail->next == NULL) //This handles if the user want to insert the value at last location
        {
            tail->next = temp;
            temp->prev = tail;
            temp->next = NULL;
        }
        else
        {

            tail->next = temp;
            tailNext->prev = temp;
            temp->next = tailNext;

            temp->prev = tail;
        }
    }
}
void del(int pos)
{
    if (head == NULL)
    {
        cout << "The list is empty";
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
        node *tail = new node();
        node *p = new node();
        node *n = new node();
        tail = head;
        while (pos != 1)
        {
            tail = tail->next;
            pos--;
        }
        if (tail->next == NULL)
        {
            p = tail->prev;
            p->next = NULL;
            delete (tail);
        }
        else
        {

            p = tail->prev;
            n = tail->next;
            p->next = n;
            n->prev = p;

            delete (tail);
        }
    }
}
int main(void)
{

    inserAtEnd(50);
    inserAtEnd(60);
    inserAtEnd(70);
    inserAtEnd(80);
    middle(20, 2);
    display(head);
    del(3);
    display(head);
    del(1);
    display(head);
    del(3);
    display(head);
}