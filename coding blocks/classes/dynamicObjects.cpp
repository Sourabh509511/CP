#include <iostream>
#include <cstring>
using namespace std;

class CardDetails
{

public:
    string cardNumber;
    string bankName;

    CardDetails(string cn, string bn)
    {
        cout << "Parameterized Constructor of CardDetails" << endl;
        cardNumber = cn;
        bankName = bn;
    }
};

class Customer
{
public:
    string name;
    int age;

    Customer()
    {
        cout << "Default Constructor of Customer" << endl;
    }

    // Parameterized Constructor // Member Initlisation
    Customer(string n, int a) : name(n), age(a)
    {
        cout << "Parameterized Constructor of Customer" << endl;
    }

    void printCutomerInfo()
    {
        cout << "Customer Information" << endl
             << "Name is " << name << endl
             << "Age is " << age << endl
             << endl;
    }
};

int main()
{
    // Customer *c1 = new Customer(); // Default Constructor called
    Customer *c = new Customer("Sourabh", 22);
    // (*c).printCutomerInfo(); //Both are same
    c->printCutomerInfo(); // Both are same
    return 0;
}