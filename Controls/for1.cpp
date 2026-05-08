#include<iostream>
using namespace std;
void monthydeposit(int deposit,int total)
{
    for(int month=1;month<=12;month++)
    {
        total +=deposit;
        cout<<"Month"<<" "<<month<<","<<"Balance:INR "<<total<<"\n";
    }
    cout<<"Your total yearly deposit:"<<total;
}
int main()
{
    int monthdeposit;
    cout<<"Enter your monthly deposit:";
    cin>>monthdeposit;
    int totalsum=0;
    monthydeposit(monthdeposit,totalsum);
    return 0;
}