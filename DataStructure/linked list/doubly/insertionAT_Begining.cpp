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

void inserAtStart(int data)
{
    node *temp = new node();
    temp->data = data;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}

int main(void)
{

    inserAtStart(50);
    inserAtStart(60);
    inserAtStart(70);
    inserAtStart(80);
    display(head);
}