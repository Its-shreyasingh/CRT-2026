// 0 1 2 3 4 
// 1 2 3 4 
// 2 3 4 
// 3 4 
// 4 
#include<iostream>
using namespace std;
int main()
{
    
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}