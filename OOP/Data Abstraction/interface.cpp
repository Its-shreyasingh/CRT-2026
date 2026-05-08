#include<iostream>                  //INTERFACE
using namespace std;                //object of abstract class cannot be  created.It is used only in inheritance
class Employee
{
    unsigned int id;
    string name;
    double salary;

    public:
    //ABSTRACT METHOD:Pure virtual function
    virtual void addEmployeerecord()=0;         //when all the methods are abstract it is called INTERFACE
    //ABSTRACT METHOD:Pure virtual function
    virtual void showEmployeerecord()=0;
    //ABSTRACT METHOD:Pure virtual function
    virtual void calculateSalary()=0;

    ~Employee()
    {
        cout<<"Hi , I am DESTRUCTOR"<<endl;
    }
    
};
int main()
    {
    // Employee obj;                                 //object cannot be created of abstract class
    // obj.addEmployeerecord(101,"SHREYA",50000);
    // obj.showEmployeerecord();
    return 0;
    }