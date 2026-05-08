#include<iostream>          //HYBRID INHERITANCE
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
class Engineer:public Employee{
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
class Project:public Engineer,public Intern
{
    public :
    void projectDetails()
    {
        cout<<"Web Application-Java Full-Stack.."<<endl;
    }
};
int main()
{
    Project p;
    cout<<p.College::getName()<<"-"<<endl;
    //p.task();   //This can be solved through diamond problem :This is ambiguity
    p.Engineer::guidelines();
    p.Intern::task();
    p.Engineer::task(); 
    p.projectDetails();
    return 0;
}