#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char str[100] = {};
    int n;
    cin >> n;

    char max[100] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        int ans = strcmp(str, max);
        if (ans == 1)
        {
            strcpy(max, str);
        }
    }

    cout << "Largets string is " << max;

    return 0;
}