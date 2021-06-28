#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

void insert(int data)
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
    }
}
void display()
{
    node *dis = head;
    cout << "Linked List : ";
    if (dis == NULL)
    {
        cout << "List is Empty";
    }
    else
    {
        while (dis != NULL)
        {
            cout << dis->data << " ";
            dis = dis->next;
        }
    }
}
void sort()
{
    node *temp = new node();
    node *tail = new node();
    tail = head;
    int te;
    while (tail->next != NULL)
    {
        temp = tail->next;

        while (temp != NULL)
        {
            if (tail->data > temp->data)
            {
                te = tail->data;
                tail->data = temp->data;
                temp->data = te;
            }
            temp = temp->next;
        }
        tail = tail->next;
    }
    display();
}

void search(int x)
{
    node *current = head;
    int flag;
    while (current != NULL)
    {
        if (current->data == x)
        {
            flag = 0;
        }

        current = current->next;
    }
    if (flag == 0) //If element is not present in the list
    {
        display();
        cout << "\nFound\n";
    }
    else
    {
        display();
        cout << "\nNot Found";
    }
}

int main(void)
{
    char ch;
    cout << "----------------------------" << endl;
    cout << "1 for Insert" << endl;
    cout << "2 for Sort" << endl;
    cout << "3 for Search" << endl;
    cout << "4 to Display the Linked list" << endl;
    cout << "5 to Quit" << endl;
    cout << "\nEnter choice";

    do
    {
        cin >> ch;
        switch (ch)
        {
        case '1':
        {
            int data;
            cout << "Enter a Number";
            cin >> data;
            insert(data);
            break;
        }
        case '2':
        {
            sort();
            break;
        }
        case '3':
        {
            int data;
            cout << "Enter a Number to search";
            cin >> data;
            search(data);
            break;
        }
        case '4':
        {
            display();
            break;
        }
        case '5':
        {
            exit(0);
            break;
        }

        default:
            cout << "Invalid Key";
        }
    } while (ch != 0);
}