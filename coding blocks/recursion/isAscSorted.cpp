#include <iostream>

using namespace std;

bool is_sorted(int *arr, int n)
{
    if (n <= 0)
        return true;
    return arr[n] > arr[n - 1] && is_sorted(arr, n - 1);

    // if (arr[n] < arr[n - 1])
    //     return false;
    // return is_sorted(arr, n - 1);

    // bool ans = is_sorted(arr, n - 1);
    // if (ans)
    //     return arr[n] > arr[n - 1];
    // else
    //     return ans;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << (is_sorted(arr, n - 1) ? "true" : "false");
    return 0;
}