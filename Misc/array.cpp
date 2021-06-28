#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the dimention of the array";
    cin >> n;
    int a[n];
    for (int i = 0; i <= n; i++)
        cin >> a[i];
    // for (int i = 0; i <= n; i++)
    //     cout << a[i];

    // cout << endl;
    // int max = 0, min;
    // for (int i = 0; i <= n; i++)
    // {
    //     if (a[i] > max)
    //     {
    //         max = a[i];
    //     }
    // }
    // for (int i = 0; i <= n; i++)
    // {
    //     if (a[i] < min)
    //     {
    //         min = a[i];
    //     }
    // }
    // cout << max << " " << min;
    cout << "enter the key";
    int k;
    cin >> k;
    for (int i = 0; i <= n; i++)
        if (a[i] == k)
        {
            cout << "Found at :" << i;
        }
    return 0;
}