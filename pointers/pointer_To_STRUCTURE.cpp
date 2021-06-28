#include <iostream>
using namespace std;

struct student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    student s, *p;
    p = &s;

    p->roll = 52;
    p->name = "satya sharma";
    p->marks = 45;

    cout << p->roll << " " << p->name << " " << p->marks;
    return 0;
}
