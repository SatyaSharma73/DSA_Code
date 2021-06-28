#include <iostream>
#include <math.h>

using namespace std;

struct student_record
{
    string name;
    int roll;
    char section;
};

void accept(student_record record[], int n)
{
    int i = 0;
    while (i < n)
    {
        cout << "Enter Details for Student No." << i + 1 << endl;

        cout << "Name : ";
        cin.ignore();
        getline(cin, record[i].name);
        cout << "Roll : ";
        cin >> record[i].roll;
        cout << "Section : ";
        cin >> record[i].section;
        cout << "_______________________________________________" << endl;
        i++;
    }
}

void display(student_record record[], int n)
{

    int i = 0;
    while (i < n)
    {
        cout << "_______________________________________________" << endl;
        cout << "Record No :" << i + 1 << endl;

        cout << "Name : " << record[i].name << endl;
        cout << "Roll : " << record[i].roll << endl;
        cout << "Section : " << record[i].section << endl;
        cout << "_______________________________________________" << endl;
        i++;
    }
}
int main()

{
    int n;
    cout << "Enter how many record you want to store" << endl;
    cin >> n;
    student_record record[n];
    accept(record, n);
    display(record, n);
    return 0;
}