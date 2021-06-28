#include <iostream>
using namespace std;

#define size 5

class cq
{
    int data[size];
    int front, rear;

public:
    cq()
    {
        front = -1;
        rear = -1;
    }
    void insert()
    {
        int r;
        cout << "enter data" << endl;
        cin >> r;

        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            data[rear] = r;
        }
        else if ((rear + 1) % size == front)
        {
            cout << "Queue is overflow.." << endl;
        }
        else
        {
            rear = (rear + 1) % size;
            data[rear] = r;
        }
    }
    void del()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Empty" << endl;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            cout << data[front] << "deleted " << endl;
            front = (front + 1) % size;
        }
    }
    void display()
    {
        int f = front, r = rear, n = size;
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements are :\n";
        if (f <= r)
        {
            while (f <= r)
            {
                cout << data[f] << " ";
                f++;
            }
        }
        else
        {
            while (f <= n - 1)
            {
                cout << data[f] << " ";
                f++;
            }
            f = 0;
            while (f <= r)
            {
                cout << data[f] << " ";
                f++;
            }
        }
        cout << endl;
    }
};

int main(void)
{
    cq q;
    char ch;
    cout << "________________________" << endl;
    cout << "1 for Insert" << endl;
    cout << "2 for Delete" << endl;
    cout << "3 for Display" << endl;

    cout << "Q to Quit" << endl;

    do
    {
        cout << "\n________________________" << endl;
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