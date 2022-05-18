#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(char *str)
{
    int i = 0, j = strlen(str) - 1;
    while (i < j)
    {
        if (str[i] != str[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{

    char str1[100] = {};
    cout << "Enter string 2 \n";
    cin.getline(str1, 100);

    int ans = isPalindrome(str1);

    cout << str1 << " is a " << (ans ? "palindrome" : "not palindrome");

    return 0;
}