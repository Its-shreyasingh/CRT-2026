#include<iostream>
using namespace std;
float power(float b,int e)
{
    if(e==0)
    {
        return 1;
    }
    if(e<0)                 //for negative exponential
    {
        return 1/(power(b,-e));
    }
    return b*power(b,e-1);  //for positive exponential
}
int main()
{
    float b;
    cout<<"Enter the base number: ";
    cin>>b;
    int e;
    cout<<"Enter the exponential number: ";
    cin>>e;
    cout<<"The power of "<<b<<" to the power of "<<e <<" is: "<<power(b,e);
    return 0;
}