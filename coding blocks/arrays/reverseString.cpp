#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{

    char str[100] = {};
    int n;
    cout << "Enter n \n";
    cin >> n;

    cin.ignore(); // To ignore the next character in input buffer

    cin.getline(str, n, '\n');
    // int i = 0;
    // int j = strlen(str) - 1;
    // while (i < j)
    // {
    //     swap(str[i], str[j]);
    //     i++;
    //     j--;
    // }

    // OR
    
    strrev(str);

    // OR

    reverse(str, str + strlen(str));

    cout << str;

    return 0;
}