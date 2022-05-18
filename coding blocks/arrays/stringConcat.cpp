#include <iostream>
#include <cstring>

using namespace std;

void concat(char *str1, char *str2)
{

    int n1 = strlen(str1), n2 = strlen(str2);
    str1[n1] = ' ';
    for (int i = n1; i < n1 + n2; i++)
    {
        str1[i] = str2[i - n1];
    }
}

int main()
{
    char str1[100] = {}, str2[100] = {};

    cin >> str1 >> str2;
    // concat(str1, str2);
    // OR
    strcat(str1, str2);
    cout << str1;

    return 0;
}