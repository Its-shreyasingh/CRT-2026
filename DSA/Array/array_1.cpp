#include<iostream>              //INSERT and PRINT elements in array
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
    return 0;
}