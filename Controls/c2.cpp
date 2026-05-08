#include<iostream>
using namespace std;
void current(int balance)
{
    cout<<"Your current balance is:"<<balance<<endl;
}

void withdrawal(int wa,int balance)
{
    if(wa<=balance)
    {
        balance -=wa;
        cout<<"Please take your money"<<endl;
        cout<<"Remaining balance:"<<balance;
    }else{
        cout<<"Insufficient balance";
    }
}

int main()
{
    
    int balmoney=5000;
    current(balmoney);
    int withdrawalmoney;
    cout<<"Enter the withdrawal money:";
    cin>>withdrawalmoney;
    withdrawal(withdrawalmoney,balmoney);
    return 0;
}