#include<iostream>          //SINGLE-LEVEL INHERITANCE
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
    // unsigned int id;
    // string name;
    // double salary;
    public:
    void rules()
    {
        cout<<"Maintain the office timing "<<endl;
    }
};
int main()
{
    Employee e;           //This class object is not created because it is the base class
    cout<<e.getName()<<endl;
    e.message();
    e.rules();
    
    // Manager obj;
    return 0;
}