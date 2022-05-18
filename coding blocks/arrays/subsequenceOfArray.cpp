#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int arr[100] = {}, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int number = 0; number < pow(2, n); number++)
    {
        for (int i = 0; i < n; i++)
        
        {
            if ((number >> i) & 1)
            {
                cout << arr[i] << "    ";
            }
        }
        cout << endl;
    }
    return 0;
}