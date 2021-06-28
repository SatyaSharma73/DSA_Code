#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverse(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string words = "";
        while (s[i] != ' ' && i < s.length())
        {
            words = words + s[i];
            i++;
        }
        st.push(words);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main(void)
{
    string sw = "Hello my name is satya";
    reverse(sw);
}