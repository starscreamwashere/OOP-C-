#include<iostream>
using namespace std;

class Student
{
    // public:
    string name;
    int age,roll_number;
    string grade;
    public:
    void setName(string nam)
    {
        name=nam;
    }
    void setAge(int a)
    {
        age=a;
    }
    void setRoll_number(int rno)
    {
        roll_number=rno;
    }
    void setGrade(string gra)
    {
        grade=gra;
    }
    void getName()
    {
        cout<<name<<endl;
    }
    int getAge()
    {
        return age;
    }
    void getRoll_No()
    {
        cout<<roll_number<<endl;
    }
    void getGrade()
    {
        cout<<grade<<endl;
    }
};

int main()
{
    Student S1;
    // S1.name="Nagi";-->when access modifier of data members is specified public
    S1.setName("Nagi");
    // S1.age=10;-->when access modifier of data members is specified public
    S1.setAge(10);
    // S1.roll_number=25;
    S1.setRoll_number(25);
    // S1.grade="A";
    S1.setGrade("A");
    // cout<<S1.age<<" "<<endl;
    S1.getName();
    cout<<S1.getAge()<<endl;
}
