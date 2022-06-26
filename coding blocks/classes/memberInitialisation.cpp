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
    CardDetails card;

    // Parameterized Constructor // Member Initlisation
    Customer(string n, int a, string cn, string bn) : name(n), age(a), card(cn, bn)
    {
        cout << "Parameterized Constructor of Customer" << endl;
    }

    void printCutomerInfo()
    {
        cout << "Customer Information" << endl
             << "Name is " << name << endl
             << "Age is " << age << endl
             << "Card Number is " << card.cardNumber << endl
             << "Bank Name is " << card.bankName << endl
             << endl;
    }
};

int main()
{
    Customer c("Sourabh", 22, "1234-3456-5678-7890", "SBI");
    c.printCutomerInfo();
    return 0;
}