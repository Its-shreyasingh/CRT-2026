#include<iostream>
using namespace std;
int method(int x,int n)
{
    cout<<n<<" ";
    if(n==x)
    {
        return -1;
    }
    return method(x,n+1);
}
int main()
{
    int n;
    cout<<"Enter the start of the series :";
    cin>>n;
    int x;
    cout<<"Enter the limit to which series has to be printed: ";
    cin>>x;
    method (x,n);
    return 0;
}