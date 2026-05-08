#include<iostream>          //MULTIPLE-LEVEL INHERITANCE
using namespace std;
class College
{
    const string NAME="JECRC";
    public :
    string getName()
    {
        return NAME;
    }
};
class Company
{
    const string name="TCS";
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
class Intern:public College,public Employee{
    public :
    void task()
    {
        cout<<"Learning and understanding.."<<endl;
    }
};
int main()
{
    // Engineer e;
    // Manager m;
    // Admin a;
    Intern i;
    // cout<<m.getName()<<endl;
    // m.message();
    // m.guidelines();
    // m.task();
    // e.task();
    // a.task();
    cout<<i.College::getName()<<"-"<<endl;
    i.message();
    i.guidelines();
    i.task();
    return 0;
}