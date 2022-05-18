#include <iostream>
#include <cstring>

using namespace std;

bool isAnagram(char *str1, char *str2)
{
    int n1 = strlen(str1), n2 = strlen(str2);
    int freqArray1[26] = {}, freqArray2[26] = {};
    for (int i = 0; i < n1; i++)
        freqArray1[int(str1[i] - 'a')]++;
    for (int i = 0; i < n2; i++)
        freqArray2[int(str2[i] - 'a')]++;

    for (int i = 0; i < 26; i++)
    {
        if (freqArray1[i] != freqArray2[i])
            return false;
    }
    return true;
}

int main()
{

    char str1[100] = {}, str2[100] = {};

    cin >> str1 >> str2;

    bool ans = isAnagram(str1, str2);

    cout << "Strings are " << (ans ? "anagram" : "not anagram");

    return 0;
}