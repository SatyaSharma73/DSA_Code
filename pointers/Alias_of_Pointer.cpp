#include <iostream>
using namespace std;

int main()
{
    int a = 50;
    int &iptr = a;

    iptr = 0;

    cout << "Initial\n";
    cout << iptr << endl;
    cout << a + 2 << endl;

    cout << "Final\n";
    cout << iptr + 1 << endl;
    cout << a;

    return 0;
}
