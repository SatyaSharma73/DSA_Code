#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int main(void)
{
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;

    third->data = 40;
    third->next = NULL;

    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
}