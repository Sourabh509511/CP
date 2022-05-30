#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int h[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}, total = 0;
    int n = sizeof(h) / sizeof(h[0]);
    int lh[100] = {}, rh[100] = {};

    lh[0] = h[0];
    rh[n - 1] = h[n - 1];
    for (int i = 1; i < n; i++)
        lh[i] = max(lh[i - 1], h[i]);
    for (int i = n - 2; i >= 0; i--)
        rh[i] = max(rh[i + 1], h[i]);

    for (int i = 0; i < n; i++)
        total += min(lh[i], rh[i]) - h[i];

    cout << total;
    return 0;
}
