#include<iostream>
using namespace std;
int main()
{
    int choice;
do{
    cout<<"\nMenu:\n1]Deposit\n2]Balance\n3]Saving\n4]Exit\n";
    cout<<"Enter your choice:";
    cin>>choice;
}while(choice !=4);

return 0;
}