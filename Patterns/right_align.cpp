//     *
//    **
//   ***
//  ****
// *****
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the rows and columns: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
            
        }
        //star
        for(int k=0;k<i+1;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}