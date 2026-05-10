#include<iostream>
#include<algorithm>
using namespace std;
bool isPalindrom(const string &str)
{
    string reversed=str;
    reverse(reversed.begin(),reversed.end());
    return str==reversed;
}
int main()
{
    string str;
    cout<<"Enter the word: ";
    cin>>str;
    if(isPalindrom(str))
    {
        cout<<str<<" is a palindrome word"<<endl;
    }
    else{
        cout<<str<<" is not a palindrome word"<<endl;
    }
    return 0;
}