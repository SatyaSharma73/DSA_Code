#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void display(node *d)
{
    while (d != NULL)
    {
        cout << d->data << "-";
        d = d->next;
    }
}

int main(void)
{
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;
    node *fourth = new node();
    head = new node();
    second = new node();
    third = new node();

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    display(head);

    node *middle = new node();

    middle->data = 50;
    second->next = middle;
    middle->next = third;

    cout << "\nAfter insertion in Middle : ";
    display(head);
}