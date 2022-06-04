#include <iostream>
#include <set>

using namespace std;

void generateSubArray(char *ch, char *output, int i, int j, set<string> &s)
{
    //  Base Case
    if (ch[i] == '\0')
    {
        output[j] = '\0';
        // print Normally
        // cout << output << endl;
        s.insert(string(output));
        return;
    }

    // Recursice case
    // Include ith character in substring and move forward
    output[j] = ch[i];
    generateSubArray(ch, output, i + 1, j + 1, s);
    // Exclude ith character in substring and move forward
    generateSubArray(ch, output, i + 1, j, s);
}

int main()
{
    char ch[10] = "abc";
    char output[10] = {};
    set<string> s;
    generateSubArray(ch, output, 0, 0, s);
    for (auto i : s)
        cout << i << endl;
    return 0;
}