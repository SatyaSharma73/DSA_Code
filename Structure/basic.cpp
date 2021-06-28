#include <iostream>
using namespace std;

struct student
{
    int roll, student_class;
};

int main()
{
    struct student s1, s2;

    cout << "Enter the Roll and Class" << endl;
    cin >> s1.roll >> s1.student_class;
    cout << "Roll Number : " << s1.roll << "\nStudent's Class : " << s1.student_class;

    s2 = s1; // This is the way a structure can be copied to another structure
    cout << "\nRoll Number : " << s2.roll << "\nStudent's Class : " << s2.student_class;

    return 0;
}