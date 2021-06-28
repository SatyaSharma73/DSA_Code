#include <iostream>
using namespace std;

struct student
{
    int roll, student_class;
};

void display(student r1) //Passing Entire Structure to Function
{
    cout << "Roll Number : " << r1.roll << "\nStudent's Class : " << r1.student_class;
}

int main()
{
    struct student s1;

    cout << "Enter the Roll and Class" << endl;
    cin >> s1.roll >> s1.student_class;
    display(s1);

    return 0;
}