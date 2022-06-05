#include <iostream>

using namespace std;

void printPaths(char ch[][5], char output[][5], int m, int n)
{
    // Base Case
    if (m < 0 or n < 0 or ch[m][n] == 'X')
        return;
    if (m == 0 and n == 0)
    {
        output[m][n] = '1';
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
                cout << output[i][j];
            cout << endl;
        }
        cout << endl;
        output[m][n] = '0';
        return;
    }
    // Recursive Case
    output[m][n] = '1';
    printPaths(ch, output, m - 1, n);
    printPaths(ch, output, m, n - 1);
    output[m][n] = '0';
}

int main()
{
    char ch[4][5] = {"000X", "00X0", "X000", "0X00"};
    char output[4][5] = {"0000",
                         "0000",
                         "0000",
                         "0000"};
    int m = 4,
        n = 4;
    printPaths(ch, output, m - 1, n - 1);
    return 0;
}