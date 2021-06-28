#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

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
    display();
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
    display();
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
    display();
}
void del(int pos)
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
    display();
}

int main(void)
{
    char ch;
    cout << "----------------------------" << endl;
    cout << "Singly Linked List Operations" << endl;
    cout << "----------------------------" << endl;
    cout << "A to Insert at Begining" << endl;
    cout << "B To  Insert in Middle" << endl;
    cout << "C Insert at End" << endl;
    cout << "2 for Sort" << endl;
    cout << "3 for Search" << endl;
    cout << "4 for Delete" << endl;
    cout << "5 to Display the Linked list" << endl;
    cout << "Q to Quit" << endl;
    cout << "\nEnter choice " << endl;

    do
    {
        cin >> ch;
        switch (ch)
        {
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
            int pos;
            cout << "Enter the postition";
            cin >> pos;
            del(pos);
            break;
        }
        case '5':
        {
            display();
            break;
        }
        case 'q':
        {
            exit(0);
            break;
        }
        case 'a':
        {
            int data;
            cout << "Enter a Number to Insert at Begining " << endl;
            cin >> data;
            insertAtStart(data);
            break;
        }
        case 'b':
        {
            int data, pos;
            cout << "Enter a Number to Insert at middle" << endl;
            cin >> data;
            cout << "Enter The postition" << endl;
            cin >> pos;
            insertAtMidle(data, pos);
            break;
        }
        case 'c':
        {
            int data;
            cout << "Enter a Number" << endl;
            cin >> data;
            insert(data);
            break;
        }
        default:
            cout << "Invalid Key" << endl;
        }
    } while (ch != 'q');
}