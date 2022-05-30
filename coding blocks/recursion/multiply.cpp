#include <iostream>

using namespace std;

int multiply(int a, int b)
{
    if (b == 0)
        return 0;
    return a + multiply(a, abs(b) - 1);
}

int main()
{
    int a, b;
    cout << multiply(4, -3);

    return 0;
}