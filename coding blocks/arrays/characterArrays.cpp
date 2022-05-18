#include <iostream>
#include <cstring>

using namespace std;

void readString(char *str)
{
    char ch;
    int i = 0;
    while (true)
    {
        ch = cin.get();
        cout << ch << " ";
        if (ch != '\n')
            break;
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
}

int main()
{

    // char name[] = {'s', 'o', 'u', 'r', 'a', 'b', 'h', '\0'};

    // cout << name << endl;

    // char name2[] = "Sourabh";

    // cout << name2 << endl;
    // int count = 0;

    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     cout << name2[i] << " ";
    //     count++;
    // }

    // cout << "\nLength of string is " << count << " and by using strlen " << strlen(name2);

    char inputArr[100] = {};
    // cout << "\nEnter String \n";
    // cin >> inputArr;

    // cout << inputArr << endl;

    cout << "Enter String \n";
    readString(inputArr);

    cout << "aaaaaaaaaa" << inputArr;

    return 0;
}