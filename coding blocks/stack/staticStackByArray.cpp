#include <iostream>

using namespace std;

template <typename T>
class Stack
{
    int t;
    int n;
    T *stackArr = NULL;

public:
    Stack(int n)
    {
        this->stackArr = new T[n];
        this->t = -1;
        this->n = n;
    }

    void push(T value)
    {
        if (t == n - 1)
            return;
        stackArr[++t] = value;
    }
    void pop()
    {
        if (t == -1)
            return;
        t--;
    }
    T top()
    {
        return stackArr[t];
    }
    bool empty()
    {
        return t == -1;
    }
    int size()
    {
        return t + 1;
    }
};

int main()
{
    Stack<int> s(10);
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