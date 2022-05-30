#include <iostream>

using namespace std;

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void getFrequency(int *arr, int n, int *freq)
{
    int csum = 0;
    for (int i = 0; i <= n; i++)
    {
        freq[csum % n]++;
        csum += arr[i];
    }
}

int main()
{
    int arr[] = {1, 6, 5, 2, 4, 3}, freq[10] = {}, total = 0;
    int n = sizeof(arr) / sizeof(arr[0]), count = 0;
    getFrequency(arr, n, freq);
    int n1 = sizeof(arr) / sizeof(arr[0]);
    printArr(freq, n1);
    for (int i = 0; i < n1; i++)
    {
        if (freq[i] > 1)
            total += (freq[i] * (freq[i] - 1)) / 2;
    }
    cout << "Total = " << total;
    return 0;
}