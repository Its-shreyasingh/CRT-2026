#include<iostream>
using namespace std;

//Declaration
int sum(int x,int y);

//Definition
int sum(int x,int y)
{
    return (x+y);
}
int main()
{
    int a=10;
    int b=20;
    int result=sum(a,b);    //Calling
    cout<<"Sum :"<<result;
    return 0;
}