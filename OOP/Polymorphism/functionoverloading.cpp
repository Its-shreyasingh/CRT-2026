#include<iostream>;             //FUNCTION OVERLOADING:Compile Time Polymorphism
using namespace std;
class Calculator{
    unsigned int a;
    unsigned int b;
    unsigned int sum;
    public:
    void add(int a,int b)
    {
        cout<<"add(int a,int b):  "<<a+b<<endl;
    }
    void add(int a,int b,int c)
    {
        cout<<"add(int a,int b,int c):  "<<a+b+c<<endl;
    }
    void add(double a,double b)
    {
        cout<<"add(double a,double b):  "<<a+b;
    }
};
int main()
{
    Calculator obj;
    obj.add(10,10);
    obj.add(10,10,10);
    obj.add(10.5,10.6);
    return 0;
}