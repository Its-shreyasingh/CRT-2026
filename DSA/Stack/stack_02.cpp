#include<iostream>              Swap two stack
#include<stack>
using namespace std;
int main()
{
    stack<int> _stack01,_stack02;

    _stack01.push(10);
    _stack01.push(20);
    cout<<"\nStack 01 - Size :"<<_stack01.size();
    cout<<"\nStack 01 - TOP: "<<_stack01.top()<<" ";

    _stack02.push(100);
    _stack02.push(200);
    _stack02.push(300);
    cout<<"\nStack 02- Size :"<<_stack02.size();
    cout<<"\nStack 02 -TOP:"<< _stack02.top() <<"\n";

    cout<<"SWAPPING..."<<endl;
    _stack01.swap(_stack02);

    cout<<"Swapping is done."<<endl;

    cout<<"\nStack 01: Size  :"<<_stack01.size();
    while(!_stack01.empty())
    {
        cout<<"\nStack 01 -TOP:"<<_stack01.top();
        _stack01.pop();
    }

    cout<<"\nStack 02 -Size :"<<_stack02.size();
    while(!_stack02.empty())
    {
        cout<<"\nStack 02 -TOP:"<<_stack02.top();
        _stack02.pop();
    }
    return 0;
}