#include<iostream>
using namespace std;
int main()
{
    bool connected=false;
    int attempts =0;
    int maxattempts=5;
    int userinput;
    cout<<"Enter the no. of attempts to be given:";
    cin>>userinput;
    while (!connected && attempts<maxattempts)
    {
        attempts++;
        cout<<"Attempt "<<attempts<<" to connect...\n";
        connected=(attempts==userinput);
    }
    if(connected)
    {
        cout<<"Connected.\n";
    }else{
        cout<<"Failed after "<<maxattempts<<"  attempts.\n";
    }
    return 0;
}