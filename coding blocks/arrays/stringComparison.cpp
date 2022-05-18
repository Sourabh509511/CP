#include <iostream>
#include <cstring>

using namespace std;

int compare(char *str1, char *str2)
{
    int n1 = strlen(str1), i = 0;
    int n2 = strlen(str2), j = 0;
    while (i < n1 && j < n2)
    {
        if (str1[i] < str2[j])
            return -1;
        else if (str1[i] > str2[j])
            return 1;
        i++;
        j++;
    }
    if (i < n1)
        return 1;
    else if (j < n2)
        return -1;
    else
        return 0;
}

int main()
{

    char str1[100] = {}, str2[100] = {};
    cout << "Enter string 1 \n";
    cin.getline(str1, 100);
    // cin.ignore();
    cout << "Enter string 2 \n";
    cin.getline(str2, 100);

    // int ans = compare(str1, str2);

    // OR

    int ans = strcmp(str1, str2);

    if (ans == 1)
        cout << "String 1 is large" << endl;
    else if (ans == -1)
        cout << "String 2 is large" << endl;
    else
        cout << "Both string are same" << endl;

    return 0;
}