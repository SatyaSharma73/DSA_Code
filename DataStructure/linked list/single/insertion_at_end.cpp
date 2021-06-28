#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
void display(struct node *d)
{
    while (d != NULL)
    {
        cout << d->data << " ";
        d = d->next;
    }
}
int main(void)
{
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 40;
    third->next = NULL;

    display(head);

    // Initial linked list : 10 20 30

    //Now we want to insert a node at the end

    int choice;
    cout << "\n1 for Insertion of node at the end";
    cout << "\n2 for Insertion of node at the beginning";

    cout << "\nenter you choice";

    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int d;
        node *last = new node();
        cout << "Enter the data";
        cin >> d;

        last->data = d;
        last->next = NULL;
        third->next = last;

        display(head);
        break;
    }
    case 2:
    {
        int d;
        node *extra = new node();
        cout << "Enter the data";
        cin >> d;

        extra->data = d;
        extra->next = head;
        display(extra);
        break;
    }

    default:
        cout << "Input invalid";
        break;
    }
}