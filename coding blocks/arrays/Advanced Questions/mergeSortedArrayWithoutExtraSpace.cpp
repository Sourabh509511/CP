#include <iostream>

using namespace std;

int main()
{
    int a[10] = {1, 3, 5, 7}, b[6] = {2, 4, 6, 8, 9, 10};
    int n1 = 4;
    int n2 = sizeof(b) / sizeof(b[0]);
    int i = n1 - 1, j = n2 - 1, k = n1 + n2 - 1;

    while (i >= 0 and j >= 0)
    {
        int value;
        if (a[i] > b[j])
        {
            value = a[i];
            i--;
        }
        else if (a[i] < b[j])
        {
            value = b[j];
            j--;
        }
        a[k] = value;
        k--;
    }

    while (j >= 0)
    {
        a[k] = b[j];
        k--;
        j--;
    }

    for (int x = 0; x < (n1 + n2); x++)
        cout << a[x] << " ";

    return 0;
}