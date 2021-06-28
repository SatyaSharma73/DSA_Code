#include <iostream>
using namespace std;

int main()
{
    int *iptr, n;

    cout << "Enter the Dimention of the Array you want to create";
    cin >> n;
    cout << "\nenter the Elements in the array";
    int myArray[n];
    for (int i = 0; i < n; i++)
    {
        cin >> myArray[i];
    }

    iptr = myArray;

    cout << "The base Address of the given myArray[] is " << iptr << endl;

    int j = 0;
    while (j < 6)
    {
        cout << "\nThe element at position " << j << " is " << *iptr << " stored at location " << iptr;
        iptr++;
        j++;
    }
    return 0;
}