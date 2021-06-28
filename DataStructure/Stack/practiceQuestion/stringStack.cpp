#include <iostream>
using namespace std;

struct stack
{
  int bookno;
  string bookname;
  stack *next;
};
stack *top = NULL;

void display()
{
  cout << "Stack : " << endl;
  if (top == NULL)
  {
    cout << "\nStack Underflow";
    exit(0);
  }
  else
  {
    stack *tail = new stack();
    tail = top;
    while (tail != NULL)
    {
      cout << "| "
           << "Book Number : " << tail->bookno << ", Book Name : " << tail->bookname << " |" << endl;

      tail = tail->next;
    }
  }
}

void push()
{
  stack *temp = new stack();
  cout << "Enter Book Number. " << endl;
  int bno;
  cin >> bno;
  temp->bookno = bno;

  cout << "Enter Book Name " << endl;
  string name;
  cin.ignore();
  getline(cin, name);
  temp->bookname = name;

  if (top == NULL)
  {
    top = temp;
    display();
  }
  else
  {
    temp->next = top;
    top = temp;
    display();
  }
}

void pop()
{
  if (top == NULL)
    cout << "\nStack Underflow" << endl;
  else
  {
    stack *temp = new stack();
    temp = top;
    top = top->next;
    free(temp);
    cout << "\nPopped Completed" << endl;
    display();
  }
}

int main(void)
{
  char ch;
  cout << "1 for Push" << endl;
  cout << "2 for Pop" << endl;
  cout << "3 for Display" << endl;
  cout << "Q to Quit" << endl;
  cout << "Enter Your Choice ";

  do
  {
    cin >> ch;
    switch (ch)
    {
    case '1':
      push();
      break;
    case '2':
      pop();
      break;
    case '3':
      display();
      break;

    default:
      cout << "Invalid Option";
      break;
    }
  } while (ch != 'q');
}