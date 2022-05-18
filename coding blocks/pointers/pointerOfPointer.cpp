#include <iostream>

using namespace std;

int main()
{

    int x = 100;
    int *xptr = &x;
    int **xptr2 = &xptr;

    cout << " x => " << x << endl;
    cout << " &x => " << &x << endl;
    cout << " xptr => " << xptr << endl;
    cout << " &xptr => " << &xptr << endl;
    cout << " xptr2 => " << xptr2 << endl;
    cout << " *xptr => " << *xptr << endl;
    cout << " *xptr2 => " << *xptr2 << endl;
    cout << " **xptr2 => " << **xptr2 << endl;

    return 0;
}