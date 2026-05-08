//Eg:1221 is palindrom because reverse of it is equal to the original number
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to check whether it is palindrome or not:";
    cin>>n;
    int s=0;
    int x=n;
    while(n>0)
    {
        int a=n%10;
        s=s*10+a;
        n=n/10;
    }
    if(s==x)
    {
        cout<<x<<" is a palindrome number";
    }else{
        cout<<x<<" is not palindrome number";
    }
    return 0;
}