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
        this->r = this->f = 0;
    }

    void push(T value)
    {
        if ((r + 1) % n == f)
            return;
        r = (r + 1) % n;
        array[r] = value;
        count++;
    }

    void pop()
    {
        if ((f + 1) % n == r)
            return;
        f = (f + 1) % n;
        count--;
    }

    T front()
    {
        return array[(f + 1) % n];
    }

    bool empty()
    {
        return (f + 1) % n == r;
    }

    T size()
    {
        return count;
    }

    void print()
    {
        for (int i = (f + 1) % n; i != (r + 1) % n; i = (i + 1) % n)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    queue<int> q(7);

    q.push(43);
    q.push(34);
    q.push(5);
    q.push(7);
    q.push(8);
    q.push(36);

    q.print();

    q.pop();
    q.print();

    q.pop();
    q.print();

    q.push(87);
    q.push(97);

    q.pop();
    q.print();

    q.pop();
    q.print();

    return 0;
}