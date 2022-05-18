#include <iostream>
#include <cstring>

using namespace std;

void copy(char *str1, char *str2)
{
    for (int i = 0; i <= strlen(str1); i++)
    {
        str2[i] = str1[i];
    }
}

int main()
{
    char str1[100] = {}, str2[100] = {};

    cin >> str1 >> str2;

    copy(str1, str2);

    cout << str2;

    return 0;
}