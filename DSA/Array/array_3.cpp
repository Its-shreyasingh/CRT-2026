#include<iostream>
using namespace std;
class Array
{
    public:
    int n;
    int * array;
    Array(const int n)
    {
        if(n>0)
        {
            this->n=n;
            createArray();
        }
    }
    void createArray()
    {
        array=new int[n]();
    }
    void insert()
    {
        cout<<endl;
        cout<<"Enter the elements in the array: "<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
    }
    void printData() const{
        cout<<"The elements of the array are: "<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<array[i]<<" ";
        }
    }
    void searchelement(int val)
    {
        for(int i=0;i<n;i++)
        {
            if(array[i]==val)
            {
                cout<<"YES, "<<val<<" is found at index "<<i<<endl;
                break;
            }
            else{
                cout<<"The number "<<val<<" is not found"<<endl;
            }
        }
    }
    ~Array()
    {
        delete[] array;
    }
};
int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    Array obj(n);
    obj.createArray();
    obj.printData();
    obj.insert();
    obj.printData();
    cout<<endl;
    int val=0;
    cout<<"Enter the element you want to search"<< endl;
    cin>>val;
    obj.searchelement(val);
    return 0;
}