#include<iostream>                      //ABSTRACT CLASS
using namespace std;                //object of abstract class cannot be  created.It is used only in inheritance
class Employee
{
    unsigned int id;
    string name;
    double salary;

    public:

    void addEmployeerecord(int id,string name,double salary)
    {
        this->id=id;
        this->name=name;
        this->salary=salary;
    }
    
    void showEmployeerecord()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
    //ABSTRACT METHOD:Pure virtual function
    virtual void calculateSalary()=0;

    ~Employee()
    {
        cout<<"Hi , I am DESTRUCTOR"<<endl;
    }
    
};
int main()
    {
    // Employee obj;                                     //object cannot be created of abstract class
    // obj.addEmployeerecord(101,"SHREYA",50000);
    // obj.showEmployeerecord();
    return 0;
    }