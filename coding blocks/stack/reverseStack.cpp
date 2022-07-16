#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int> s)
{
    if (s.empty())
        return;
    cout << s.top() << endl;
    s.pop();
    printStack(s);
}

void pushBottom(int x, stack<int> &s)
{
    // Base Case
    if (s.empty())
    {
        s.push(x);
        return;
    }

    // Recursive Case

    int y = s.top();
    s.pop();
    pushBottom(x, s);
    s.push(y);
}

void reverseStack(stack<int> &s)
{
    if (s.empty())
        return;
    int x = s.top();
    s.pop();
    reverseStack(s);
    pushBottom(x, s);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Before reverse \n";
    printStack(s);
    reverseStack(s);
    cout << "After reverse \n";
    printStack(s);
    return 0;
}