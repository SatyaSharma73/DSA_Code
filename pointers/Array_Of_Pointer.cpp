#include <iostream>
using namespace std;

const int MAX = 6;
int main()
{
    const char *name[MAX] = {"satya", "renu", "Zara Ali", "Hina Ali", "Nuha Ali", "Sara Ali"};
    int i = 0;
    while (i < 6)
    {
        cout << name[i] << " Is Stored at Loction " << &name[i] << endl;
        name[i]++;
        i++;
    }

    return 0;
}