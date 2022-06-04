#include <iostream>

using namespace std;

string moveX(string x, int index, int n)
{
    if (index == n)
        return x.substr(index, n + 1);
    string result = moveX(x, index + 1, n);
    if (x[index] == 'x')
        return result + x[index];
    return x[index] + result;
}

int main()
{
    string s = "xaxbxc", s1 = "axbxcxd";
    int n = s.length();
    cout << moveX(s, 0, n - 1) << endl;
    return 0;
}