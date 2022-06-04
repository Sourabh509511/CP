#include <iostream>

using namespace std;

void moveFromIToN(char *ch, int i)
{
    // Find the index of null character
    int j = i;
    while (ch[j] != '\0')
        j++;
    while (j >= i)
        ch[j + 2] = ch[j];
}

void replacePi(char *ch, int index, int &n)
{
    // Base Case
    if (ch[index] == '\0')
        return;
    if (ch[index] == 'p' && ch[index + 1] == 'i')
    {
        int j = n;
        while (j >= index + 2)
        {
            ch[j + 2] = ch[j];
            j--;
        }
        ch[index] = '3';
        ch[index + 1] = '.';
        ch[index + 2] = '1';
        ch[index + 3] = '4';
        n += 2;
        replacePi(ch, index + 4, n);
        // return;
    }
    else
    {
        replacePi(ch, index + 1, n);
    }
}

int main()
{
    char ch[100] = {'p', 'i', 'i', 'p', 'i', '\0'};
    int n = sizeof(ch);
    replacePi(ch, 0, n);
    cout << ch;
    return 0;
}