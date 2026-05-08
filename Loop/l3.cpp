//1,12,123,1234,12345
#include<iostream>
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
        a=a*10+x;
        x++;
    }
    return 0;
}