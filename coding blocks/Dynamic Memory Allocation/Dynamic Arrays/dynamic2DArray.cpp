#include <iostream>

using namespace std;

int main()
{
    int m, n;

    cout << "Enter no of rows and columns\n";

    cin >> m >> n;

    int **arr = new int *[m];

    for (int i = 0; i < m; i++)
        arr[i] = new int[n];

    cout << "Enter the " << m * n << " elements\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Entered " << m * n << " elements are:-\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}