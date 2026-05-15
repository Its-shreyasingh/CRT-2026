#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> _stack;
    if(_stack.empty())
    {
        cout<<"Stack is empty!"<<endl;
    }else{
        cout<<"Stack is not empty!"<<endl;
    }
    cout<<endl;
    cout<<"Adding elements in the stack..";
    _stack.push(10);
    cout<<_stack.top()<<" ";

    _stack.push(20);
    cout<<_stack.top()<<" ";

    _stack.push(30);
    cout<<_stack.top()<<" ";

    cout<<endl<<endl;

    if(_stack.empty())
    {
        cout<<"Stack is empty!";
    }else{
        cout<<"Stack is not empty!";
    }
    cout<<"\nStack size is :"<<_stack.size()<<"\n";
    return 0;
}