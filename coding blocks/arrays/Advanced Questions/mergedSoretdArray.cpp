#include <iostream>

using namespace std;

int main()
{
    int a[] = {1, 4, 7}, b[] = {2, 3, 6, 9, 11, 12}, c[100] = {}, n1 = 3, n2 = 6, n3 = n1 + n2;
    int i = 0, j = 0, k = 0;

    while (i < n1 and j < n2)
    {
        int value;
        if (a[i] > b[j])
        {
            value = b[j];
            j++;
        }
        else if (a[i] < b[j])
        {
            value = a[i];
            i++;
        }
        c[k] = value;
        k++;
    }
    while (i < n1)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    for (int x = 0; x < n3; x++)
        cout << c[x] << " ";

    return 0;
}