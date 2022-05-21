#include <iostream>

using namespace std;

void transpose(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
                swap(arr[i][j], arr[j][i]);
        }
    }
}

void print(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{

    int arr[100][100] = {}, m, n;
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
    transpose(arr, m, n);
    swap(m, n);
    print(arr, m, n);
    return 0;
}