#include <iostream>
#include <cstring>
using namespace std;

class Customer
{
    char *name;
    int age;
    char gender;
    double credits;

public:
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
    ~Customer()
    {
        cout << "Inside destructor of " << name << endl;
        delete[] name;
    }

    void setName(char *c)
    {
        strcpy(name, c);
    }

    char *getName()
    {
        return name;
    }
};

int main()
{
    // Instantiating/Creating object of the class
    Customer c1("Sourabh", 22, 'M', 100);
    c1.printCutomerInfo();

    Customer c3;
    c3 = c1;
    // Copy using copy constructor to deepcopy the c1 object.
    c3.setName("Lakshit");
    cout << "c3.name is " << c3.getName() << endl;
    return 0;
}