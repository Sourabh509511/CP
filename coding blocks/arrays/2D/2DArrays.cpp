#include <iostream>

using namespace std;

void printColumnWise(int arr[][4], int m, int n)
{
    cout << "Column Wise : \n";
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][4] = {};

    cout << "Enter 12 elements: \n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Row Wise : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "\t"; // << (arr[i][j] <= 9 ? "    " : "   ");
        }
        cout << endl;
    }
    printColumnWise(arr, 3, 4);
    // 1 2 3 4 5 6 7 8 9 10 11 12
    return 0;
}