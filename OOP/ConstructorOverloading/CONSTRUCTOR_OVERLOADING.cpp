#include<iostream>          //CONSTRUCTOR OVERLOADING
using namespace std;
class Employee
{

    unsigned int id;
    string name;
    double salary;

    public:
    //NO-ARGUMENTED:-DEFAULT CONSTRUCTOR
    Employee()
    {

    }
    //ARGUMENTED CONSTRUCTOR
    Employee(int id)
    {
        this->id=id;
    }
    Employee(int id,string name,double salary)
    {
        this->id=id;
        this->name=name;
        this->salary=salary;
    }
    ~Employee()
    {
        cout<<"Hi , I am DESTRUCTOR"<<endl;
    }
    void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{   Employee obj1;
    Employee obj2(101);
    Employee obj3(1,"SHREYA",123456.45);
    cout<<"1: "<<endl;
    obj1.display();
    cout<<"2: "<<endl;
    obj2.display();
    cout<<"3: "<<endl;
    obj3.display();
    return 0;
}