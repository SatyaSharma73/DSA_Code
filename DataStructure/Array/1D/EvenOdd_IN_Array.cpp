#include <iostream>

using namespace std;

int check(int check_arr[], int d)
{
    int i = 0;
    int counter = 0;
    while (i < d)
    {

        if (check_arr[i] % 2 == 0)
        {
            counter = counter + 1;
        }
        else
        {
            counter = 0;
        }

        i++;
    }

    if (counter >= 1)
    {
        return 1;
    }
    else if (counter == 0)
        return 0;
    else
        return 2;
}
int main()
{
    int n;
    cout << "enter the dimention of array";
    cin >> n;
    int array[n];
    int i = 0;
    while (i < n)
    {
        cin >> array[i];
        i++;
    }
    if (check(array, n) == 1)
        cout << "The Array is Even";
    else if (check(array, n) == 2)
        cout << "The Array is Odd";
    else
        cout << "The Array is Odd + even";
    return 0;
}