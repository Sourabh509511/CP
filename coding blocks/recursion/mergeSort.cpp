#include <iostream>

using namespace std;

void merge(int *arr, int start, int mid, int end)
{
    int j = start, k = mid + 1, l = start, brr[100] = {};
    while (j <= mid and k <= end)
    {
        if (arr[j] < arr[k])
        {
            brr[l] = arr[j];
            j++;
            l++;
        }
        else
        {
            brr[l] = arr[k];
            k++;
            l++;
        }
    }

    while (j <= mid)
    {
        brr[l] = arr[j];
        j++;
        l++;
    }
    while (k <= end)
    {
        brr[l] = arr[k];
        k++;
        l++;
    }

    for (int i = start; i <= end; i++)
        arr[i] = brr[i];
}

void mergeSort(int *arr, int start, int end)
{
    if (start == end)
        return;
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {80, 70, 0, 60, 30, 18, 7, 2, 9}, n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}