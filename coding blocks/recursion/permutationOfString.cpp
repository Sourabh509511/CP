#include <iostream>

using namespace std;

void permutationsOfString(char *ch, int index, int n)
{
    if (ch[index] == '\0')
    {
        cout << ch << endl;
        return;
    }
    // Recursive Case
    for (int j = index; j < n; j++)
    {
        // Decide which character is assigned to the ith position
        swap(ch[index], ch[j]);
        // Generate Permutations including current character
        permutationsOfString(ch, index + 1, n);
        // Backtracking...
        swap(ch[j], ch[index]);
    }
}

int main()
{
    char ch[] = "abc";
    permutationsOfString(ch, 0, sizeof(ch) - 1);
    return 0;
}