#include<iostream>
using namespace std;

void sum(int a,int b)
{
    cout<<"Sum:"<<(a+b)<<endl;
}
void subtract(int a,int b)
{
    cout<<"Difference:"<<(a-b)<<endl;
}
void multiply(int a,int b)
{
    cout<<"Multiplication:"<<(a*b)<<endl;
}
void divide(int a,int b)
{
    cout<<"Division:"<<(a/b)<<endl;
}
int main()
{
    int x,y;
    cout<<"Enter the value x:";
    cin>>x;
    cout<<"Enter the value y:";
    cin>>y;
    sum(x,y);
    
    subtract(x,y);
    multiply(x,y);
    divide(x,y);
    return 0;
}
