#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;
    public:
    Customer()
    {
        name="4";
        cout<<"Constructor is "<<name<<endl;
    }
    Customer(string name)
    {
        this->name = name;
        cout<<"constructor is "<<name<<endl;
    }
    ~Customer()
    {
        cout<<"Destructor is "<<name<<endl;
    }

};

int main()
{
    Customer A1("1"),A2("2"),A3("3"); 
    // "What is the Reason Behind the destructor reverse order" Hint : Dependency
    //LIFO (Last-In, First-Out): The stack behaves like a pile of books. You put A1 down, then A2 on top, then A3 on the very top. To avoid a collapse (a crash), you must pick up A3 first, then A2, and finally A1.Safety: By reversing the order, C++ guarantees that when A3 is being destroyed, A2 and A1 are still alive and "healthy" just in case A3 needs to talk to them one last time during its cleanup.     

    Customer *A4 = new Customer;
    delete A4; 
}