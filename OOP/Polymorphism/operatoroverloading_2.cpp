#include<iostream>              //Operator overloading is for object
using namespace std;
class Class
{
    private:
    bool data;
    public:
    Class(bool d = false) : data(d) {}
    Class operator ==(const Class& obj) const{
        return Class(this->data==obj.data);
    }
    void showData()
    {
        cout<<"Result: "<<data;
    }
};
int main()
{
    Class obj(0);

    Class obj1(100),obj2(200);
    obj=(obj1==obj2);
    obj.showData();
    
    // Class obj1(100),obj2(200),obj3(300);
    // obj=(obj1+obj2+obj3);           //Chaining
    // obj.showData();
    return 0;
}