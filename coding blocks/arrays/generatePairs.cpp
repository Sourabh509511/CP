#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);

    // for n items there wil be n(n-1)/2 pairs

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            cout << arr[i] << "   " << arr[j] << endl;
    }

    return 0;
}