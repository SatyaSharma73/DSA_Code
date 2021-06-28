#include <iostream>
using namespace std;

#define size 4

class queue
{
    int data[size];
    int front, rear;

public:
    queue()
    {
        front = -1;
        rear = -1;
    }
    void insert();
    void del();
    void display();
};

void queue::insert()
{
    if (rear == size - 1)
    {
        cout << "Queue if Full " << endl;
        return;
    }
    if (front == -1)
    {
        front++;
    }
    rear++;
    cout << "Enter Data ";
    cin >> data[rear];
}

void queue::del()
{
    if (front == -1)
    {
        cout << "Empty " << endl;
    }
    cout << data[front] << " deleted ";
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        front++;
}

void queue::display()
{
    int temp;
    if (front == -1)
    {
        cout << "Empty" << endl;
    }
    else
    {
        temp = front;
        cout << endl;
        while (temp <= rear)
        {
            cout << data[temp] << " ";
            temp++;
        }
    }
}

int main(void)
{
    queue q;
    char ch;

    do
    {
        cout << "_________________________________________________________" << endl;
        cout << "\t1 for Enqueue" << endl;
        cout << "\t2 for Dequeue" << endl;
        cout << "\t3 for Display" << endl;

        cout << "\tQ to Quit" << endl;
        cout << "Enter Your Choice ";
        cin >> ch;
        switch (ch)
        {
        case '1':
            q.insert();
            break;
        case '2':
            q.del();
            break;
        case '3':
            q.display();
            break;
        }
    } while (ch != 'q');
}