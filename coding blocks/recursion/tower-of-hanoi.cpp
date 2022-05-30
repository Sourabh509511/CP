#include <iostream>

using namespace std;

void towerOfHanoi(int n, char src, int helper, char dest)
{
    if (n <= 0)
        return;
    towerOfHanoi(n - 1, src, dest, helper);
    cout << "Moving disk from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, helper, src, dest);
}

int main()
{
    towerOfHanoi(3, 'A', 'B', 'C');
    return 0;
}