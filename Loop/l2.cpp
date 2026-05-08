//2,22,222,2222...
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the limit of printing:";
    cin>>n;
    int a=2;
    for(int i=0;i<n;i++)
    {
        cout<<a<<",";
        a=a*10+2;
    }
    return 0;
}