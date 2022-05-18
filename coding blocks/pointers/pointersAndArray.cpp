#include <iostream>

using namespace std;

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        cout << "Value   at arr[" << i << "]= " << i[arr] << " is same as " << *(arr + i) << endl;
        cout << "Address at arr[" << i << "]= " << &arr[i] << " is same as " << arr + i << endl;
    }

    return 0;
}