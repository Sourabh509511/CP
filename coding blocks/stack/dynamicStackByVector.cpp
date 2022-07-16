#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Stack
{
    vector<T> stackVector;

public:
    void push(T value)
    {
        stackVector.push_back(value);
    }

    void pop()
    {
        if (stackVector.empty())
            return;
        stackVector.pop_back();
    }

    T top()
    {
        return stackVector.back();
    }

    bool empty()
    {
        return stackVector.empty();
    }

    int size()
    {
        return stackVector.size();
    }
};

int main()
{
    Stack<int> s;
    cout << "Size of stack is " << s.size() << endl;
    cout << "Stack is Empty? " << (s.empty() == 1 ? "True" : "False") << endl;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Element at top of stack is " << s.top() << endl;
    cout << "Size of stack is " << s.size() << endl;
    cout << "Stack is Empty? " << (s.empty() == 1 ? "True" : "False") << endl;

    s.pop();
    s.pop();
    s.pop();

    cout << "Element at top of stack is " << s.top() << endl;
    cout << "Size of stack is " << s.size() << endl;
    cout << "Stack is Empty? " << (s.empty() == 1 ? "True" : "False") << endl;

    return 0;
}