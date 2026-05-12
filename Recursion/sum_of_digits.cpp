#include<iostream>
using namespace std;
int sumdigits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n%10)+sumdigits(n/10);
}
int main()
{
    int n;
    cout<<"Enter the number whose digit sum  has to be calculated: ";
    cin>>n;
    cout<<"The sum of digits of "<<n<<" is:" <<sumdigits(n);
    return 0;
}