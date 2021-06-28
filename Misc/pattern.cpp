#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;
    int count = 1;
    for (i = 0; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {

            cout << "*";
        }
        int s = 2 * n - 2 * i;
        for (j = 1; j <= s; j++)
        {

            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {

            cout << "*";
        }
    }
    cout << endl;
    return 0;
}
