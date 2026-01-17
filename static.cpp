#include<iostream>
using namespace std;

class Customer
{
    string name;
    int acc_number;
    int balance;
    static int total_customer;
    public:

    Customer(string name,int acc_number,int balance)
    {
        this->name=name;
        this->acc_number=acc_number;
        this->balance=balance;
        total_customer++;

    }
    void display()
    {
        cout<<name<<" "<<acc_number<<" "<<balance<<" "<<total_customer<<endl;
    }
};
int Customer::total_customer=0;
int main()
{
    Customer A1("Anubhav",30,5000);
    Customer A2("Balbir",20,5000);
    A1.display();
    A2.display();
}