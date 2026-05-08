//1,4,27,256,3125....
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the limit of printing:";
    cin>>n;
    int a=1;
    int x=2;
    for(int i=0;i<n;i++)
    {
        cout<<a<<",";
        a=std::pow(x,x);
        x++;
    }
    return 0;
}