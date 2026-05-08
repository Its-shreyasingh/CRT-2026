#include<iostream>          //c++ does not have a concept of static classes
using namespace std;
class JointAccount
{
    public:
    // Static method: can be called as JointAccount::getbalance()
    static int getbalance()
    {
        // A Local Class (defined inside a function)
        class Information
        {
            public :
            static int getinfo()
            {
                cout<<"WELCOME"<<endl;
            }
        };
        //  Create a static instance of that local class
        // This object lives for the entire duration of the program
        static Information obj;
        obj.getinfo();
    }
};
int main() {
    JointAccount::getbalance();
    return 0;
}