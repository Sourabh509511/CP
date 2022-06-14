#include <iostream>

using namespace std;

void place_n_queen(int *output, int i, int n)
{
    if (i == n)
    {
        for (int x = 0; x < n; x++)
            cout << output[x] << " ";
        cout << endl;
        return;
    }
    for (int column = 0; column < n; column++)
    { // here n is the no of column
        bool canPlace = true;
        for (int prevPlacedQueen = 0; prevPlacedQueen < i; prevPlacedQueen++)
        {
            // previous place queen is               // column=current column
            //  in the current column                // i = previous row
            // prevPlacedQueen = row of previous placed queen
            if (column == output[prevPlacedQueen] || output[prevPlacedQueen] == column - (i - prevPlacedQueen) || output[prevPlacedQueen] == column + (i - prevPlacedQueen))
            {
                canPlace = false;
                break;
            }
        }
        if (canPlace)
        {
            output[i] = column;
            place_n_queen(output, i + 1, n);
        }
    }
}

int main()
{
    int output[100] = {}, n = 4;
    place_n_queen(output, 0, n);
    return 0;
}