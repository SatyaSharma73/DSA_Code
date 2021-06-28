// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int array[], int k, int start, int end)
{

    // Repeat until the pointers low and high meet each other
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (array[mid] == k)
            return mid;

        if (array[mid] < k)
            start = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}

int main(void)
{
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int key;
    int n = 7;
    cout << "enter the key";
    cin >> key;
    int result = binarySearch(array, key, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);
}