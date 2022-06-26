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
    Customer(string name, int age)
    {
        cout << "Parameterized Constructor of Customer" << endl;
        this->name = name;
        this->age = age;
    }

    void printCutomerInfo()
    {
        cout << "Customer Information" << endl
             << "Name is " << name << endl
             << "Age is " << age << endl
             << endl;
    }

    bool operator>(Customer *c)
    {
        return age > c->age;
    }
};

int main()
{
    Customer *c = new Customer("Sourabh", 22);
    c->printCutomerInfo(); // Both are same
    Customer *c1 = new Customer("Lakshit", 25);
    c1->printCutomerInfo();

    cout << (c > c1 ? c->name : c1->name) << " is greater than " << (c > c1 ? c1->name : c->name);
    return 0;
}