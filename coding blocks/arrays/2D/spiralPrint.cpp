#include <iostream>

using namespace std;

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}},
        m = 4, n = 4, sr = 0, sc = 0, er = m - 1, ec = n - 1;

    while (sr <= er and sc <= ec)
    {
        // Print Starting row
        for (int i = sc; i <= ec; i++)
        {
            cout << arr[sr][i] << " ";
        }
        sr++;
        // Print Ending Column
        for (int i = sr; i <= er; i++)
        {
            cout << arr[i][ec] << " ";
        }
        ec--;
        if (sr <= er) // For preventing duplicate print
        {

            // Printing Ending Row
            for (int i = ec; i >= sc; i--)
            {
                cout << arr[er][i] << " ";
            }
            er--;
        }
        if (sc <= ec) // For preventing duplicate print
        {

            // Printing Starting Column
            for (int i = er; i >= sr; i--)
            {
                cout << arr[i][sc] << " ";
            }
            sc++;
        }
    }

    return 0;
}