#include <iostream>

using namespace std;

void search(int arr[][100], int m, int n, int target)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Element found at Indexes " << i + 1 << " row and " << j + 1 << " column\n";
                return;
            }
        }
    }
    cout << "Element not found \n";
}

int main()
{
    int arr[100][100] = {}, m, n, target;
    // pair<int, int> p;
    cout << "Enter rows and columns : \n";
    cin >> m >> n;
    cout << "Enter " << (m * n) << " Elements\n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << " Enter target element\n";
    cin >> target;
    search(arr, m, n, target);

    return 0;
}