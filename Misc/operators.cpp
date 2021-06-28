#include <iostream>
using namespace std;

int main()
{
    int i, j, l, r;

    for (i = 1, l = 0, r = 7; i <= 5; i++, l++, r--)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j >= l && j <= r)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
