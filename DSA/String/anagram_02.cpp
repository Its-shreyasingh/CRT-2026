#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class Anagram
{
    string s1;
    string s2;
    public:
    Anagram(string str1,string str2)
    {
        for (char &c : str1) c = tolower(c);
        for (char &c : str2) c = tolower(c);

        this->s1 = str1;
        this->s2 = str2;
    }
    bool isAnagram()
    {
        cout<<"s1: "<<s1<<endl<<"s2: "<<s2<<endl;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return ((s1==s2) ? true :false);
    }

};
int main()
{
    cout<<"Enter the first string: ";
    string str1;
    cin>>str1;
    cout<<"Enter the second string: ";
    string str2;
    cin>>str2;
    Anagram obj(str1,str2);
    if((str1.length() == str2.length()))
    {
        if(obj.isAnagram())
        {
        cout<<"Yes,these are anagram!";
        }
        else{
        cout<<"No,these are not anagram!";
        }
    }
    else{
        cout<<"Both string are of different length";
    }
    return 0;
}