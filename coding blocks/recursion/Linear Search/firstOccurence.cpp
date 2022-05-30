#include <iostream>

using namespace std;

int firstOccurence(int *arr, int index, int n, int target)
{
    if (index > n - 1)
        return -1;

    if (arr[index] == target)
        return index;
    return firstOccurence(arr, index + 1, n, target);
}

int main()
{
    int arr[] = {1, 3, 0, 3, 4}, n = sizeof(arr) / sizeof(arr[0]);
    cout << firstOccurence(arr, 0, n, -1);
    return 0;
}