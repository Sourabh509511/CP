#include <iostream>
#include <cstring>
using namespace std;

class Customer
{
public:
    char name[100];
    int age;
    char gender;
    double credits;

    void printCutomerInfo()
    {
        cout << "Customer Information" << endl
             << "Name is " << name << endl
             << "Age is " << age << endl
             << "Gender is " << gender << endl
             << "Credits is " << credits << endl;
    }
};

int main()
{
    // Instantiating/Creating object of the class

    Customer c1;

    // Accessing class attributes(data member and member function)
    // Value Asssignment
    strcpy(c1.name, "Sourabh");
    c1.age = 22;
    c1.gender = 'M';
    c1.credits = 100;

    c1.printCutomerInfo();

    // Value retriving
    // cout << "Customer Information" << endl
    //      << "Name is " << c1.name << endl
    //      << "Age is " << c1.age << endl
    //      << "Gender is " << c1.gender << endl
    //      << "Credits is " << c1.credits << endl;

    return 0;
}