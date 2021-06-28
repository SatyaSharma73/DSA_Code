#include <iostream>

using namespace std;

void lSearch(int arr[], int search)
{
    int i = 0;
    while (i < 6)
    {
        if (arr[i] == search)
        {
            cout << "Found the Number " << search << " at " << i << " index.";
        }

        i++;
    }
}

int main()
{
    int arr[6];
    cout << "Enter the elements : ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    int s;
    cout << "Enter a Element you want to search : ";
    cin >> s;
    lSearch(arr, s);
    return 0;
}