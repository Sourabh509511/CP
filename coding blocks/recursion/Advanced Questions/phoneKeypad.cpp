#include <iostream>

using namespace std;

string digitMap[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void phoneKeypad(char ch[], char output[], int i, int j)
{
    // Base Case
    if (ch[i] == '\0')
    {
        output[j] = '\0';
        cout << output << endl;
        return;
    }
    // Recursive Case
    // Extract character at i.Convert it into integer and fetch all options of that digit
    string options = digitMap[ch[i] - '0'];

    // Check for blank string or 0 or 1 character.
    if (!options.length())
        // Skip the current character
        phoneKeypad(ch, output, i + 1, j);

    for (char c_k : options)
    {
        output[j] = c_k;
        phoneKeypad(ch, output, i + 1, j + 1);
    }
}

int main()
{
    char ch[100] = {}, output[100] = {};
    cin >> ch;
    phoneKeypad(ch, output, 0, 0);
    return 0;
}