//Eg: 9 is neon number :-9^2=81....8+1=9 s==n
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number to check if it's neon number:";
    cin>>n;
    int a=std::pow(n,2);
    int s=0;
    while(a>0)
    {
        int p=a%10;
        s=s+p;
        a=a/10;
    }
    if(s==n)
    {
        cout<<n<<" is a NEON NUMBER";
    }
    else{
        cout<<n<<" is not a NEON NUMBER";
    }
    return 0;
}