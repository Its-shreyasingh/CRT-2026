#include<iostream>          //SETTER GETTER
using namespace std;
class Employee
{

    unsigned int id;
    string name;
    double salary;

    public:
    void setId(const int id)            //const is used with the setters with arguments
    {
        this->id=id;
    }
    int getId() const                  //const is used with getters after the method
    {
        return id;
    }
    void setName(const string name)
    {
        this->name=name;
    }
    string getName() const
    {
        return name;
    }
    void setSalary(const double salary)
    {
        this->salary=salary;
    }
    double getSalary() const
    {
        return salary;
    }
};
int main()
{   Employee obj;
    obj.setId(101);
    obj.setName("SHREYA");
    obj.setSalary(50000);
    cout<<obj.getId()<<"-"<<endl;
    cout<<obj.getName()<<"-"<<endl;
    cout<<obj.getSalary()<<"-"<<endl;
    return 0;
}