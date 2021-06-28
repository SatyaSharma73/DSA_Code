#include <iostream>
using namespace std;

int main()
{
    int x = 50;
    float y = 21.2;

    int *iptr;
    float *fptr;
    void *vIptr, *vFptr;

    iptr = &x;
    fptr = &y;
    vIptr = &x;
    vFptr = &y;

    cout << "\nX : " << *iptr;
    cout << "\nY : " << *fptr;

    cout << "\nVoid X : " << *(int *)vIptr;   //type casting is required for void pointer
    cout << "\nVoid Y : " << *(float *)vFptr; //type casting is required for void pointer

    return 0;
}