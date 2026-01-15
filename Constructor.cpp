#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;
    public:
    Customer()//Default constructor
    {
        name="Rohit";
        account_number=3030;
        balance=5000;
    }
    // Customer(string n,int ac,int b)//Parameterized constructor
    // {
    //     name=n;
    //     account_number=ac;
    //     balance=b;
    // }
    Customer(string name,int account_number,int balance)//this pointer always points to the object
    {
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }

    //Inline Constructor
    // inline Customer(string a,int b, int c):name(a),account_number(b),balance(c){

    // }
    Customer(Customer &B)//copy constructor:please note the why behind this passing arguments by reference
    {
        name=B.name;
        account_number=B.account_number;
        balance=B.balance;

    }
    void display()
    {
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
};
int main()
{
    Customer one;
    one.display();
    Customer two("Mohit",3031,5000);
    two.display();
    Customer three(two);
    three.display();
}