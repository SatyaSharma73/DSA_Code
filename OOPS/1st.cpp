#include <iostream>
#include <string>

using namespace std;

class applicant
{
    long Ano;
    char name[40];
    float agg;
    char grade;
    void grademe(float agg)
    {
        grade = (agg >= 80) ? 'A' : (agg < 80 and agg >= 65) ? 'B'
                                : (agg < 65 and agg >= 50)   ? 'C'
                                                             : 'D';
    }

public:
    void enter()
    {
        cout << "Enter The Values for Ano , Agg , Name" << endl;
        cin >> Ano;
        cin >> agg;
        cin.getline(name, 40);
        grademe(agg);
    }
    void result()
    {
        cout << "Ano : " << Ano << endl
             << "Name : " << name << endl
             << "Agg : " << agg << endl
             << "Grade : " << grade;
    }
};

int main()
{
    applicant ap1;
    ap1.enter();
    ap1.result();
    return 0;
}