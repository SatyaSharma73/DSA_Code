#include <iostream>
using namespace std;

class student
{
    int roll;
    string name;
    float marks;

public:
    void enter(int a, string s, float b)
    {
        roll = a;
        name = s;
        marks = b;
        display();
    }
    student()
    {
        cout << "\nDefault Constructor Called";
    }
    ~student()
    {
        cout << "\nDestructor Called ";
    }
    void display()
    {
        cout << "\nName : " << name;
        cout << "\nRoll : " << roll;
        cout << "\nMarks : " << marks;
    }
};

const int size = 3;

int main()
{

    student *ptr = new student[size];

    int a;
    string s;
    float c;
    int i = 0;
    while (i < size)
    {
        cout << "\nEnter the Roll No. and marks";
        cin >> a >> c;
        cout << "\nEnter Name";
        cin >> s;

        ptr->enter(a, s, c);
        ptr++;
        i++;
    }

    return 0;
}
