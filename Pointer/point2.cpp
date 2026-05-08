#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int *ptr=&arr[2];               //points to arr[0](address 1000,say) for first index put just arr but for 2 to last index you need to put '&' like &arr[2]
    cout<<"*ptr= "<<*ptr<<endl;     //10
    cout<<"ptr= "<<ptr<<endl;       //address (eg.0x1000)
    ptr=ptr+2;
    //Note:The expression ptr+n does not change ptr itself unless you assign it 
    cout<<"After ptr+2:*ptr="<<*ptr<<endl;          //30
    cout<<"Address now= "<<ptr<<endl;       //0*1223
    ptr=ptr-1;
    cout<<"After ptr-1:*ptr= "<<*ptr<<endl;
    return 0;
}