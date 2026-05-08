#include<iostream>
using namespace std;
void progressbar(int progress,int barwidth)
{
    int filled;
    filled=(progress*barwidth)/100;
    cout<<"[";
    for(int i=0;i<barwidth;i++)
    {
        if(i<filled)
        {
            cout<<"-";
        }else
        {
            cout<<" ";
        }
    }
    cout<<"]"<< progress<<"%"<<endl;
}
int main()
{
    int progresspercent=50;
    int bar=25;
    progressbar(progresspercent,bar);
    return 0;
}