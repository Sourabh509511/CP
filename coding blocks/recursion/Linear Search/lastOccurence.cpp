#include <iostream>

using namespace std;

int lastOccurence(int *arr, int n, int target)
{
    if (n < 0)
        return -1;
    if (arr[n] == target)
        return n;
    return lastOccurence(arr, n - 1, target);
}

int main()
{
    int arr[] = {1, 3, 0, 3, 4}, n = sizeof(arr) / sizeof(arr[0]);
    cout << lastOccurence(arr, n - 1, 3);
    return 0;
}