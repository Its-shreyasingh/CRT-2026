#include<iostream>
using namespace std;
class Employee
{

    int id=1;
    public:
    //No argument constructor-Default constructor
    Employee()
    {
        cout<<"Hi, I am CONSTRUCTOR"<<endl;
    }
    ~Employee()
    {
        cout<<"Hi , I am DESTRUCTOR"<<endl;
    }
    void display()
    {
        cout<<"ID: "<<id<<endl;
    }
};
int main()
{
    Employee obj;
    obj.display();
    return 0;
}