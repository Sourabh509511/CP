#include <iostream>

using namespace std;

int chessElephant(int i, int j)
{
    if (i == 0 and j == 0)
        return 1;
    int count = 0;
    for (int x = 1; x <= i; x++)
        count += chessElephant(i - x, j);
    for (int x = 1; x <= j; x++)
        count += chessElephant(i, j - x);
    return count;
}

int main()
{
    int n = 4;
    cout << chessElephant(n - 1, n - 1);
    return 0;
}