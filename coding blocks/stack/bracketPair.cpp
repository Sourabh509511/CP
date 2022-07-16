#include <iostream>
#include <stack>

using namespace std;

bool isBalanced(string s)
{
    stack<char> brackets;

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case '(':
        case '{':
        case '[':
            brackets.push(s[i]);
            break;
        case ']':
            if (!brackets.empty() && brackets.top() == '[')
                brackets.pop();
            else
                return false;
            break;
        case ')':
            if (!brackets.empty() && brackets.top() == '(')
                brackets.pop();
            else
                return false;
            break;
        case '}':
            if (!brackets.empty() && brackets.top() == '{')
                brackets.pop();
            else
                return false;
            break;
        }
    }
    return brackets.empty();
}

int main()
{
    string s;
    cin >> s;
    cout << (isBalanced(s) == 1 ? "String is balanced" : "String is not balanced");
    return 0;
}