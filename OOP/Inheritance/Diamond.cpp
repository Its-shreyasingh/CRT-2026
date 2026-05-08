                //Diamond Problem explanation
                //      Employee
                //        |
               // Intern     Engineer
               //         |
               //      Project
#include<iostream>   
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
class Employee:public Company                                               //class A
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
class Admin:public Employee{            //Concrete Class
    public: void task()
    {
        cout<<"Admin Task.."<<endl;
    }
};
class Engineer:virtual public Employee{                                    //class B:virtual class A
    public:
    void task()
    {
        cout<<"Coding..."<<endl;
    }
};
class Intern:public College,virtual public Employee{                        //class C:virtual class A
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
    p.Engineer::guidelines();
    p.Engineer::task();
    p.Intern::task();
    p.projectDetails();
    return 0;
}
                //Diamond Problem explanation
                //      Employee
                //        |
               // Intern     Engineer
               //         |
               //      Project