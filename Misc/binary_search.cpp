#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int k)
{
    int s = 0, e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == k)
        {
            return mid;
        }
        else if (a[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, k;
    cout << "enter the dimention of the array";
    cin >> n;

    int a[n];
    for (int i = 0; i <= n; i++)
        cin >> a[i];

    cout << "enter the key";
    cin >> k;

    cout << binarySearch(a, n, k);
    return 0;
}