#include <iostream>
using namespace std;

int main()
{

    short int a, b, c, max;

    cout << "Enter 3 numbers\n";
    cin >> a >> b >> c;

    max = (a > b && a > c) ? a : (b > a && b > c) ? b
                                                  : c;

    cout << "Maximum Number is " << max;

        return 0;
}