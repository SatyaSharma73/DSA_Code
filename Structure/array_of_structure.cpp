#include <iostream>
#include <string>
using namespace std;

struct student
{
    string fullName;
    char section;
    int roll, CLASS;
};
int main()
{

    int n;
    cout << "Enter The Number of Student : ";
    cin >> n;
    struct student record[n];

    int i = 0;
    while (i < n)
    {
        cout << "\nEnter The Name , Roll number , Class and section of the student : \n";
        cin.ignore();
        getline(cin, record[i].fullName);
        cin >> record[1].roll;
        cin >> record[1].CLASS;
        cin >> record[1].section;
        i++;
    }

    for (i = 0; i < n; i++)
    {
        cout << "\nThe Student Number " << i + 1 << endl;
        cout << "---------------------------------------------";
        cout << "\nName : " << record[i].fullName << endl;
        cout << "Roll Number : " << record[1].roll << endl;
        cout << "Class : " << record[1].CLASS << endl;
        cout << "Section : " << record[1].section << endl;
    }
    return 0;
}