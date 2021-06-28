#include <iostream>
#include <stack>

using namespace std;
stack<int> s1;
void display()
{
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }
}
int main(void)
{

    s1.push(14);
    s1.push(4);
    s1.push(11);
    s1.push(124);

    display();
}