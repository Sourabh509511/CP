#include <iostream>

using namespace std;

string spellArr[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void spell(int value)
{
    if (value <= 0)
        return;
    spell(value / 10);
    cout << spellArr[value % 10] << " ";
    return;
}

int main()
{

    spell(1230);

    return 0;
}