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
};
int main()
{
    Customer one;
}