#include <iostream>

using namespace std;

bool ratMaze(char ch[][5], int m, int n)
{
    if (m == 0 and n == 0)
        return true;
                        // Negative case handling
    if (ch[m][n] == 'X' || m < 0 || n < 0)
        return false;

    // Negative case handling
    // if (m == 0)
    //     return ratMaze(ch, m, n - 1);
    // if (n == 0)
    //     return ratMaze(ch, m - 1, n);

            // Check For top        // Check from left
    return ratMaze(ch, m - 1, n) or ratMaze(ch, m, n - 1);
}

int main()
{
    char ch[4][5] = {"000X", "00X0", "X000", "00X0"};
    int m = 4, n = 5;
    cout << ratMaze(ch, m - 1, n - 1);
    return 0;
}