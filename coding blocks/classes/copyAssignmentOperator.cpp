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

    Customer() {}
    // Copy assignment Operator
    void operator=(Customer &c)
    {
        cout << "Copy Assignment Operator " << endl;
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

    Customer c3;
    // Copy using copy assignment operator.
    c3 = c1;
    c3.printCutomerInfo();

    return 0;
}