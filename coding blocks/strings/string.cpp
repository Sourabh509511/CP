#include <iostream>
#include <algorithm>
#include <cstring> //strtok

using namespace std;

int main()
{
    string str;

    str = "hello";

    cout << str << endl;

    cout << str[0] << endl;

    string str2 = "world";

    cout << str << " " << str2 << endl;

    string str3("This");
    string str4(str3); // or str4 = str3

    cout << str3 << endl;

    cout << str3.compare(str4) << endl;
    cout << str.compare(str4) << endl;

    cout << (str3 == str4) << endl;
    cout << (str < str4) << endl;

    cout << "l found at index from start " << str.find("l") << endl;
    cout << "l found at index from last " << str.rfind("l") << endl;
    cout << "z not found then printing string::npos " << str.find("z") << endl;

    cout << "string::npos" << string::npos << endl;

    cout << "Substring => " << str.substr(2) << endl;
    cout << "Substring => " << str.substr(1, 2) << endl;
    cout << "Substring out of range => " << str.substr(2, 100) << endl;

    str.append(" " + str2);

    string str5(str);
    reverse(str5.begin(), str5.end());

    cout << "Reversed string => " << str5 << endl;

    char ch[] = "192.168.0.1";
    char chDelim[] = ".";

    char *tokens = strtok(ch, chDelim);
    while (tokens != NULL)
    {
        cout << tokens << endl;
        tokens = strtok(NULL, chDelim);
    }

    return 0;
}