#include <iostream>

using namespace std;

int arrSum(int *arr, int n)
{
    if (n < 0)
        return 0;
    return arr[n] + arrSum(arr, n - 1);
}

int main()
{
    int arr[] = {3, 10, 2, 1, 0, 7, 8, 5, 6, -3, -1}, ans = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    ans = arrSum(arr, n - 1);
    cout << ans;
    return 0;
}