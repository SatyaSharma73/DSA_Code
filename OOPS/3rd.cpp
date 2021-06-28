#include <iostream>

using namespace std;

class Resort
{
    int Rno, days;
    string name;
    float charges;
    float compute(int days, float charges)
    {
        float amount = days * charges;
        if (amount > 11000)
        {
            return (1.02 * days * charges);
        }
        else
            return (days * charges);
    }

public:
    void getinfo() //Setter Function
    {
        cout << "Enter the room number";
        cin >> Rno;
        cout << "Enter the Name";
        cin >> name;
        cout << "Enter the room charges per day and Days" << endl;
        cin >> charges >> days;
    }
    void Display() //getter Function
    {
        cout << "room number : " << Rno << endl;
        cout << "Name : " << name << endl;
        cout << "room charges per day : " << charges << endl;
        cout << "Days : " << days << endl;
        cout << "Total Charges : " << compute(days, charges) << endl;
    }

    Resort(int a, string b, float c, int d) //Parameterized Constructor
    {
        Rno = a;
        name = b;
        charges = c;
        days = d;
    }
    Resort() //Default Constructor  : It is Mandatory to define Default COnstructor if 1 or more than 1 Parameterized Constructor is defined in the class
    {
        cout << "Deafult Constructor" << endl;
    }

    Resort(Resort &object) //Copy Constructor : Use define copy Constructor to make a deep copy
    {
        Rno = object.Rno;
        name = object.name;
        charges = object.charges;
        days = object.days;
    }

    ~Resort() //Destructor : Called
    {
        cout << "Destructor is Called" << endl;
    }

    bool operator==(Resort &object) //Operator Overloading : Used For Comparing 2 objects
    {
        if (Rno == object.Rno && name == object.name && charges == object.charges && days == object.days)
            return true;
        else
            return false;
    }
};

int main()
{
    // Resort r1;
    // r1.getinfo();
    // r1.Display();

    Resort r2(420, "satya sharma", 980.5, 2); // This type of new object declarations and inserting value in the object at the same time we need
                                              // Parameterized Constructor
    r2.Display();
    Resort r1 = r2; // Copy Constructor is used here
    r1.Display();
    if (r1 == r2) // operator overloading is used here to compare 2 objects
    {
        cout << "Yes Both are Same" << endl;
    }
    else
        cout << "No They are not Same" << endl;
    return 0;
}