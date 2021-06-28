#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "enter the dimention of the array";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) // n
        cin >> a[i];

    for (int i = 0; i < n - 1; i++) // n^2
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) // n
        cout << a[i] << " ";
    return 0;
}

//O(n^2)