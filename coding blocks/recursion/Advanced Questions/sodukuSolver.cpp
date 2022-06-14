#include <iostream>
#include <cmath>

using namespace std;

bool canPlace(int n, int arr[][9], int i, int j, int d)
{
    int rootN = sqrt(n);
    for (int x = 0; x < n; x++)
    {
        if (arr[i][x] == d || arr[x][j] == d)
            return false;
    }
    int sx = i / rootN * rootN;
    int sy = j / rootN * rootN;
    for (int a = sx; a < sx + rootN; a++)
    {
        for (int b = sy; b < sy + rootN; b++)
        {
            if (arr[a][b] == d)
                return false;
        }
    }
    return true;
}

void sodukuSolver(int n, int arr[][9], int i, int j)
{
    if (i == n)
    {
        for (int a = 0; a < n; a++)
        {
            for (int b = 0; b < n; b++)
            {
                cout << arr[a][b] << " ";
            }
            cout << endl;
        }
        return;
    }
    if (j == n)
    {
        sodukuSolver(n, arr, i + 1, 0);
    }
    if (arr[i][j] != 0)
    {
        sodukuSolver(n, arr, i, j + 1);
        return;
    }
    for (int d = 0; d <= 9; d++)
    {
        if (canPlace(n, arr, i, j, d))
        {
            arr[i][j] = d;
            sodukuSolver(n, arr, i, j + 1);
            arr[i][j] = 0;
        }
    }
}

int main()
{
    int arr[][9] = {
        {3, 0, 6, 5, 0, 8, 4, 0, 0},
        {5, 2, 0, 0, 0, 0, 0, 0, 0},
        {0, 8, 7, 0, 0, 0, 0, 3, 1},
        {0, 0, 3, 0, 1, 0, 0, 8, 0},
        {9, 0, 0, 8, 6, 3, 0, 0, 5},
        {0, 5, 0, 0, 9, 0, 6, 0, 0},
        {1, 3, 0, 0, 0, 0, 2, 5, 0},
        {0, 0, 0, 0, 0, 0, 0, 7, 4},
        {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    sodukuSolver(9, arr, 0, 0);

    return 0;
}