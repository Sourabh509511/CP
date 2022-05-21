#include <iostream>

using namespace std;

void wavePrint(int arr[][3], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < m; i++)
                cout << arr[i][j] << "\t"; 
        }
        else
        {

            for (int i = m - 1; i >= 0; i--)
                cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{

    int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    wavePrint(arr, 4, 3);
    return 0;
}