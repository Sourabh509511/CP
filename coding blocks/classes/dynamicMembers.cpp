#include <iostream>
#include <cstring>
using namespace std;

class Customer
{
public:
    char *name;
    int age;
    char gender;
    double credits;

    Customer() {}
    // Copy assignment Operator
    void operator=(Customer &c)
    {
        cout << "Copy Assignment Operator " << endl;
        name = new char[100];
        strcpy(name, c.name);
        age = c.age;
        gender = c.gender;
        credits = c.credits;
    }

    // Parameterized Constructor
    Customer(char *n, int a, char g, double c)
    {
        cout << "Copy Constructor" << endl;
        name = new char[100];
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
    // Destructor
    ~Customer()
    {
        cout << "Inside destructor of " << name << endl;
        delete[] name;
    }
};

int main()
{
    // Instantiating/Creating object of the class
    Customer c1("Sourabh", 22, 'M', 100);
    c1.printCutomerInfo();

    // Copy using copy constructor to deepcopy the c1 object.
    Customer c3 = c1;
    c3.name = "Lakshit";
    c3.printCutomerInfo();

    c1.printCutomerInfo();
    return 0;
}