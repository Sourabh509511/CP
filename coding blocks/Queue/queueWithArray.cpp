#include <iostream>

using namespace std;

template <typename T>
class queue
{
    T f;
    T r;
    T count;
    T n;
    T *array;

public:
    queue(T n)
    {
        this->n = n;
        this->array = new T[n];
        this->count = 0;
        this->r = this->f = -1;
    }

    void push(T value)
    {
        if (r + 1 == n)
            return;
        r += 1;
        array[r] = value;
        count++;
    }

    void pop()
    {
        if (f == r)
            return;
        f += 1;
        count--;
    }

    T front()
    {
        return array[f + 1];
    }

    bool empty()
    {
        return f == r;
    }

    T size()
    {
        return count;
    }
};

int main()
{
    queue<int> q(5);

    q.push(43);
    q.push(34);
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(34);

    cout << "Queue is" << (q.empty() ? " empty\n" : " not empty\n");

    cout << "Size of current Queue is " << q.size() << endl;

    cout << "Front element at front is " << q.front() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();

    cout << "Queue is" << (q.empty() ? " empty\n" : " not empty\n");

    cout << "Size of current Queue is " << q.size() << endl;

    cout << "Front element at front is " << q.front() << endl;

    return 0;
}