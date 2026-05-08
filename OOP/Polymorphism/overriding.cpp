#include<iostream>          //OVERRIDING
using namespace std;
class Company
{
    string name="TCS";
    public:
    string getName()
    {
        return name;
    }
    void guidelines()
    {
        cout<<"Maintain the office framework"<<endl;
    }
};
class Employee:public Company
{
    // unsigned int id;
    // string name;
    // double salary;
    public:
    void guidelines()
    {
        cout<<"Maintain the office timing "<<endl;
    }
};
int main()
{
    Employee e;
    cout<<e.getName()<<endl;
    e.guidelines();
    return 0;
}