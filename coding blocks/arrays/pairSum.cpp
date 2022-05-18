#include <iostream>
#include <algorithm>

using namespace std;

void countTarget(int *arr, int n, int t)
{
    // Bruteforce Approach
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == t)
    //         {
    //             cout << "{" << arr[i] << "," << arr[j] << "} \n";
    //         }
    //     }
    // }
    // Two pointer approach
    sort(arr, arr + n); // Uses Introsort to sort the array = (quicksort + heapsort) + insertionsort
    int i = 0, j = n - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == t)
        {
            cout << "{" << arr[i] << "," << arr[j] << "} \n";
            i++;
            j--;
        }
        else if (sum < t)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{

    int arr[100] = {}, n, target;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter target ";
    cin >> target;
    countTarget(arr, n, target);
    return 0;
}