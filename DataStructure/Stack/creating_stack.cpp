#include <iostream>
using namespace std;

struct stack
{
    int data;
    stack *next;
};

stack *top = NULL;

void push()
{
    int data;
    stack *temp = new stack();
    cout << "Enter Data : ";
    cin >> data;
    temp->data = data;
    if (top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
}

void pop()
{
    stack *temp = new stack();
    if (top == NULL)
    {
        cout << "Stack UnderFlow" << endl;
    }
    else
    {

        temp = top;
        top = top->next;

        free(temp);
        cout << "POP Successfull" << endl;
    }
}

void display()
{
    cout << "Stack : ";
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        stack *temp;
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main(void)
{
    char ch;
    cout << "\n----------------------" << endl;
    cout << "P for push" << endl;
    cout << "O for pop" << endl;
    cout << "D for Show the Stack" << endl;
    cout << "Q for quit" << endl;
    cout << "----------------------" << endl;
    cout << "Enter Your Choice";
    do
    {

        cin >> ch;
        switch (ch)
        {
        case 'o':
        {
            pop();

            break;
        }
        case 'p':
        {
            push();

            break;
        }
        case 'd':
        {
            display();

            break;
        }
        case 'q':
        {
            exit(0);
        }
        default:
        {
            cout << "Incorrect Input ";
        }
        }
    } while (ch != 'q');
}