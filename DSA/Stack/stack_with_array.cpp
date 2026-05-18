#include<iostream>
using namespace std;
class Stack
{
    private:
    static const int MAX_SIZE=5;
    int Array[MAX_SIZE];
    int top;
    public:
    Stack()
    {
        cout<<"Stack Created\n";
        top=-1;
    }
    bool isEmpty()
    {
        return (top == -1);
    }
    bool isFull()
    {
        return (top == MAX_SIZE -1);
    }
    int push(int value)
    {
        if(isFull())
        {
            cout<<"Stack Overflow"<<endl;
            return -1;
        }else{
            Array[++top]=value;
            cout<<"\nInserted: "<<value;
        }
    }
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return -1;
        }else{
            return Array[top--];
        }
    }
    int peep()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return Array[top];
    }
    void printStack()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty";
            return;
        }
        cout << "\nStack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << Array[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int MAX_SIZE=4;
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.printStack();
    cout << "Peep Top: " << s.peep() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
    s.printStack();
}
