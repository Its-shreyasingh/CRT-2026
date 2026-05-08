#include<iostream>          //HIERARCHICAL-LEVEL INHERITANCE
using namespace std;
class Company
{
    string name="TCS";
    public:
    string getName()
    {
        return name;
    }
    void message()
    {
        cout<<"Welcome on board"<<endl;
    }
};
class Employee:public Company
{
    public:
    void guidelines()
    {
        cout<<"Maintain the office timing "<<endl;
    }
};
class Manager:public Employee{          //Concrete Class
    public:
    void task()
    {
        cout<<"Catch up at the meeting"<<endl;
    }
};
class Engineer:public Employee{             //Concrete Class
    public:
    void task()
    {
        cout<<"Coding..."<<endl;
    }
};
class Admin:public Employee{            //Concrete Class
    public: void task()
    {
        cout<<"Admin Task.."<<endl;
    }
};
int main()
{
    Engineer e;
    Manager m;
    Admin a;
    cout<<m.getName()<<endl;
    m.message();
    m.guidelines();
    m.task();
    e.task();
    a.task();
    return 0;
}