#include <iostream>
#include <climits>

using namespace std;

int main()
{

    int arr[100] = {}, n;
    cout << "Enter n:-" << endl;
    cin >> n;
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // // Cumulative sum array created for optimisation
    // int carr[n + 1] = {
    //     0,
    // };
    // for (int i = 1; i <= n; i++)
    // {
    //     carr[i] = carr[i - 1] + arr[i - 1];
    // }

    // // Cumulative sum array created for optimisation
    // int sum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         // int locSum = 0;
    //         // for (int k = i; k <= j; k++)
    //         // {
    //         //     locSum += arr[k];
    //         // }
    //         // if (locSum > sum)
    //         // {
    //         //     sum = locSum;
    //         // }

    //         // Optimisation using  cumulative sum array.
    //         if (carr[j + 1] - carr[i] > sum)
    //         {
    //             sum = carr[j + 1] - carr[i];
    //         }
    //     }
    // }

    // Sum from Kadane's Algorithm

    int sum = arr[0];
    int lastMax = arr[0];

    for (int i = 1; i < n; i++)
    {
        lastMax = max(lastMax + arr[i], arr[i]);
        if (sum < lastMax)
        {
            sum = lastMax;
        }
    }
    // Sum from Kadane's Algorithm

    cout << "Maximum Subarray sum is " << sum << endl;
    return 0;
}