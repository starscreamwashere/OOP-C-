#include<iostream>
using namespace std;

class Customer
{
    public:
    string name;
    int account_number;
    int balance;
    Customer()
    {
        cout<<"COnstructor is called"<<endl;//Default constructor
    }
    Customer(string n,int ac,int b)
    {
        name=n;
        account_number=ac;
        balance=b;
    }
    Customer(string name,int account_number,int balance)//this pointer, always points to the object
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }
};
int main()
{
    Customer one;
    Customer two("Rohit",3030,5000);
}