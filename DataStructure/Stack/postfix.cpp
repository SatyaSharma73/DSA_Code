#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int postfix(string s)
{
    // create an empty stack
    stack<int> st;

    // traverse the given expression
    for (int i = 0; i < s.length(); i++)
    {
        // if the current character is an operand, push it into the stack
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
            {
                st.push(op2 + op1);
                break;
            }
            case '-':
            {
                st.push(op2 - op1);
                break;
            }
            case '*':
            {
                st.push(op1 * op2);
                break;
            }
            case '/':
            {
                st.push(op1 / op2);
                break;
            }
            case '^':
            {
                st.push(pow(op1, op2));
                break;
            }
            }
        }
    }
    return st.top();
}

int main()
{
    string exp = "53+26/*35*+";
    cout << postfix(exp);
    return 0;
}
