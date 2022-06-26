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
    // Copy Constructor.(It will take argument as pass by refference as
    // while implementing copy constructor we cannot use copy constructor)
    Customer(Customer &c)
    {
        cout << "Copy Constructor " << endl;
        strcpy(name, c.name);
        age = c.age;
        gender = c.gender;
        credits = c.credits;
    }

    // Parameterized Constructor
    Customer(char *n, int a, char g, double c)
    {
        strcpy(name, n);
        age = a;
        gender = g;
        credits = c;
    }

    void printCutomerInfo()
    {
        cout << "Customer Information" << endl
             << "Name is " << name << endl
             << "Age is " << age << endl
             << "Gender is " << gender << endl
             << "Credits is " << credits << endl
             << endl;
    }
};

int main()
{
    // Instantiating/Creating object of the class
    Customer c1("Sourabh", 22, 'M', 100);
    c1.printCutomerInfo();

    // Calling copy constructor.
    Customer c2 = c1; // or Customer c2(c1)
    c2.printCutomerInfo();

    return 0;
}