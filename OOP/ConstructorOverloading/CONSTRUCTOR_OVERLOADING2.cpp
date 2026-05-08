#include<iostream>          //CONSTRUCTOR OVERLOADING
using namespace std;
class Employee
{

    unsigned int id;
    string name;
    double salary;

    public:
    //NO-ARGUMENTED:-DEFAULT CONSTRUCTOR

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
    ~Employee()
    {
        cout<<"Hi , I am DESTRUCTOR"<<endl;
    }
};
int main()
{   Employee objShreya;
    //<<"Employee: "<<sizeof(Employee)<<endl;       //Class does not have size because size is of real world entity and class is not a real world entity
    cout<<"Size of objShreya: "<< sizeof(objShreya)<<endl;      //Object has size
    objShreya.addEmployeerecord(101,"SHREYA",50000);
    objShreya.showEmployeerecord();
    Employee objPalak;
    cout<<"Size of objPalak: "<<sizeof(objPalak)<<endl;
    objPalak.addEmployeerecord(102,"PALAK",100000);
    objPalak.showEmployeerecord();
    return 0;
}