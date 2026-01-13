#include<iostream>
using namespace std;

class a
{
    char d;
    char c;
    int b; 
};

int main()
{
    a obj;
    cout<<sizeof(obj)<<" "<<endl;//here my expected answer was 5(1 char + 4 int) but the real output was 8 , bcoz concept of padding got applied here
}