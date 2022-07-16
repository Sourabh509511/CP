#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<char> q;
    char ch;
    int freq[26] = {0};
    while (true)
    {
        cin >> ch;

        if (ch == '.')
            break;

        freq[ch - 'a']++;

        if (freq[ch - 'a'] == 1)
            q.push(ch);

        while (!q.empty() and freq[q.front() - 'a'] > 1)
            q.pop();
        (q.empty() ? cout << -1 : cout << q.front()) << endl;
    }
    return 0;
}