#include<iostream>
using namespace std;
int countvowels(const string &str)
{
    int count=0;
    for(char ch:str)
    {
        char lower=tolower(ch);
        if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str="Hello World";
    int result = countvowels(str);
    cout << "Number of vowels: " << result << endl;
    return 0;

}