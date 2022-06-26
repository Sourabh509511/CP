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
    // Default Constructor
    Customer()
    {
        cout << "Default Constructor " << endl;
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
    Customer c1;

    // Accessing class attributes(data member and member function)
    // Value Asssignment
    strcpy(c1.name, "Sourabh");
    c1.age = 22;
    c1.gender = 'M';
    c1.credits = 100;
    c1.printCutomerInfo();

    // Calling parameterized constructor who takes 4 arguments.
    Customer c2("Lakshit", 22, 'M', 0);
    c2.printCutomerInfo();

    return 0;
}