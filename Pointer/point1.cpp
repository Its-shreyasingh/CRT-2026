#include<iostream>
using namespace std;
int main(){
    int var=10;
    int* ptr=&var;
    cout<<"Value of var: "<<var<<endl;
    cout<<"Address of var: "<<&var<<endl;
    cout<<"Pointer holds: "<<ptr<<endl;
    cout<<"Value pointed to: "<<*ptr<<endl;
    *ptr=20;
    cout<<"New value of var:"<<var<<endl;

    return 0;
}
//& saves the address
//* is used to dereference