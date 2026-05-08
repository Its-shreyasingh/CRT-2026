//0,1,1,2,3,5,8....
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the limit of printing:";
    cin>>n;
    int a=0,b=1,res=0;
    for(int i=1;i<=n;i++)
    {
    if(i==1){
        cout<<a<<",";
    }if(i==2)
    {
        cout<<b<<",";
    }
        res=a+b;
        a=b;
        b=res;
        cout<<res<<",";
    }
    return 0;
}