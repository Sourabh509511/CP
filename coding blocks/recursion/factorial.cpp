#include <iostream>

using namespace std;

int fact(int n)
{
    if (n <= 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n = 0, ans;
    cout << "Enter a number to calculate factorial: \n";
    cin >> n;
    ans = fact(n);
    cout << "Factorial of " << n << " is " << ans;
    return 0;
}