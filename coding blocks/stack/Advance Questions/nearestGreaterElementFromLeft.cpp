#include <iostream>
#include <stack>
#include <list>

using namespace std;

int main()
{
    int arr[] = {5, 2, 0, 4, 1, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    stack<int> s;
    list<int> fw;

    for (int i = 0; i < size; i++)
    {
        while (!s.empty() and s.top() < arr[i])
            s.pop();
        if (s.empty())
        {
            fw.push_back(-1);
        }
        else
        {
            fw.push_back(s.top());
        }
        s.push(arr[i]);
    }

    for (auto i : fw)
    {
        cout << i << " ";
    }

    return 0;
}