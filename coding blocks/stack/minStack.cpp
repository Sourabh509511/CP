#include <iostream>
#include <stack>

using namespace std;

class custom_stack
{
    stack<int> mainStack;
    stack<int> helperStack;

public:
    void push(int value)
    {
        mainStack.push(value);
        if (helperStack.empty() || helperStack.top() >= value)
            helperStack.push(value);
    }

    void pop()
    {
        if (mainStack.empty())
            return;
        if (mainStack.top() == helperStack.top())
            helperStack.pop();
        mainStack.pop();
    }

    int size()
    {
        return mainStack.size();
    }

    int top()
    {
        return mainStack.top();
    }

    bool empty()
    {
        return mainStack.empty();
    }

    int minTop()
    {
        return helperStack.top();
    }
};

int main()
{
    custom_stack s;
    s.push(10);
    s.push(20);
    s.push(5);
    s.push(40);
    s.push(5);
    s.push(-50);

    cout << "Top is " << s.top() << endl;
    cout << "Minimum element is " << s.minTop() << endl;

    s.pop();

    cout << "Top is " << s.top() << endl;
    cout << "Minimum element is " << s.minTop() << endl;

    s.pop();

    cout << "Top is " << s.top() << endl;
    cout << "Minimum element is " << s.minTop() << endl;

    s.pop();

    cout << "Top is " << s.top() << endl;
    cout << "Minimum element is " << s.minTop() << endl;

    s.pop();

    cout << "Top is " << s.top() << endl;
    cout << "Minimum element is " << s.minTop() << endl;

    s.pop();

    cout << "Top is " << s.top() << endl;
    cout << "Minimum element is " << s.minTop() << endl;
    return 0;
}