#include <iostream>

using namespace std;

int typeCast(string s, int n)
{
    if (n < 0)
        return 0;
    char value = s[n];
    s.pop_back();
    return typeCast(s, n - 1) * 10 + (value - '0');
}

int main()
{
    string s = "1234";
    int ans = typeCast(s, s.length() - 1);
    cout << ans;
    return 0;
}