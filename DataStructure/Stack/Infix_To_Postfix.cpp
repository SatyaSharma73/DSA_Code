#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infixToPostfix(string exp)
{
    stack<char> s;
    string res;
    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[i] >= 'a' && exp[i] <= 'z' || exp[i] >= 'A' && exp[i] <= 'Z')
            res = res + exp[i];
        else if (exp[i] == '(')
            s.push(exp[i]);
        else if (exp[i] == ')')
        {
            while (s.top() != '(')
            {
                res = res + s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.empty() && prec(s.top()) >= prec(exp[i]))
            {
                res = res + s.top();
                s.pop();
            }
            s.push(exp[i]);
        }
    }
    while (!s.empty())
    {
        res = res + s.top();
        s.pop();
    }
    return res;
}

int main()
{
    cout << infixToPostfix("((a+b)*c+d/e-f)");
    return 0;
}