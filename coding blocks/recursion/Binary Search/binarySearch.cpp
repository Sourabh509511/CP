#include <iostream>

using namespace std;

int binarySearch(int *arr, int start, int end, int target)
{
    if (start > end)
        return -1;
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
        return binarySearch(arr, mid + 1, end, target);
    else
        return binarySearch(arr, start, mid - 1, target);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13}, n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, 0, n - 1, 13);
    return 0;
}