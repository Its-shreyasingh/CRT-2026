#include<iostream>          //MULTI-LEVEL INHERITANCE
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
class Manager:public Employee{
    public:
    void task()
    {
        cout<<"Catch up at the meeting"<<endl;
    }
};
int main()
{
    Manager m;
    cout<<m.getName()<<endl;
    m.message();
    m.guidelines();
    m.task();
    return 0;
}