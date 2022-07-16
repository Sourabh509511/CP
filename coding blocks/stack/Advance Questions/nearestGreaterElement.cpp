#include <iostream>
#include <stack>
#include <forward_list>

using namespace std;

int main()
{
    int arr[] = {5, 3, 6, 7, 2, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    stack<int> s;
    forward_list<int> fw;

    for (int i = size - 1; i >= 0; i--)
    {
        while (!s.empty() and s.top() < arr[i])
            s.pop();
        if (s.empty())
        {
            fw.push_front(-1);
        }
        else
        {
            fw.push_front(s.top());
        }
        s.push(arr[i]);
    }

    for (auto i : fw)
    {
        cout << i << " ";
    }

    return 0;
}