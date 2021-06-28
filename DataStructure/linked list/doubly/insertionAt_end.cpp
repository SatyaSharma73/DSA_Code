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
    while (d != NULL)
    {
        cout << d->data << " ";
        d = d->next;
    }
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

int main(void)
{

    inserAtEnd(50);
    inserAtEnd(60);
    inserAtEnd(70);
    inserAtEnd(80);
    display(head);
}