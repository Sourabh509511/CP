#include <iostream>

using namespace std;

int main()
{

    int n = 100;
    int *nptr = &n;
    cout << "Address of n = " << &n << endl;
    cout << "Value of nptr = " << nptr << endl;

    char ch = 'A';
    char *chptr = &ch;

    cout << ch << endl;
    cout << &ch << endl;
    cout << chptr << endl;
    cout << sizeof(&ch) << endl;

    // Storing Address of character variable in integer pointer using typecasting

    int *ptr = (int *)&ch; // Now the address of ch will be stored as we have type casted the address in int

    cout << "Address of ch is " << ptr << endl;

    char *nptr2 = (char *)&n;
    cout << "Address of n is " << nptr2 << endl;

    int *nulptr = NULL;

    cout << "Null value is " << *nulptr << endl;

    return 0;
}