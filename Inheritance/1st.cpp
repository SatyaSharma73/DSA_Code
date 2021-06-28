#include <iostream>
using namespace std;

class person
{
    int code;
    string pName;

public:
    person()
    {
        cout << "Default Contructor is called ";
    }
    // Note - Default and Parameterised Constructor Doesnt have a return type.
    // person(int p_code, string p_name) //Parameterised Constructor .
    // {
    //     code = p_code;
    //     pName = p_name;
    //     display();
    // }
    void read()
    {
        cout << "Enter Code : ";
        cin >> code;
        cout << "enter name : ";
        cin >> pName;
    }
    void display()
    {
        cout << "Person Name is : " << pName << " and Code is : " << code;
    }
};

class account : virtual public person
{
    float pay;

public:
    void read_acc()
    {
        cout << "Enter Pay : ";
        cin >> pay;
    }
    void display_acc()
    {
        cout << "The Pay Amount : " << pay << endl;
    }
};

class admin : virtual public person
{
    int exp;

public:
    void read_adm()
    {
        read();
        cout << "Enter Experience : ";
        cin >> exp;
    }
    void display_admin()
    {
        display();
        cout << "The Experience : " << exp << endl;
    }
};

class master : public account, public admin
{
public:
    void read_master()
    {
        read_acc();
        read_adm();
    }
    void display_master()
    {
        display_acc();
        display_admin();
    }
};

int main()
{
    master obj;
    obj.read_master();
    obj.display_master();
    return 0;
}