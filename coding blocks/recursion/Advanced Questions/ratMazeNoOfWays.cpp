#include <iostream>

using namespace std;

void ratMaze(char ch[][5], int m, int n, int &count)
{
    if (m == 0 and n == 0)
    {
        count++;
        return;
    }
    if (ch[m][n] == 'X')
        return;

    if (n > 0)
        ratMaze(ch, m, n - 1, count);

    if (m > 0)
        ratMaze(ch, m - 1, n, count);
}

int main()
{
    char ch[4][5] = {"000X", "00X0", "X000", "0X00"};
    int m = 4, n = 5, count = 0;
    ratMaze(ch, m - 1, n - 2, count);
    cout << count;
    return 0;
}