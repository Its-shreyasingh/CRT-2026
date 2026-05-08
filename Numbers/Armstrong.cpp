//Eg: 1634 is armstrong: no of digit =4 1^d+6^d+3^d+4^d=s if s==n
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to check if it is armstrong number or not: ";
    cin>>n;
    int count=0;
    int s=0;
    int x=n;
    int r=n;
    while(x>0)
    {
        int a=x%10;
        count++;
        x=x/10;
    }
    while(r>0)
    {
        int a=r%10;
        s=s+std::pow(a,count);
        r=r/10;
    }
    if(s==n)
    {
        cout<<n<<" is a armstrong number";
    }else{
        cout<<n<<" is not a armstrong number";
    }
    return 0;
}