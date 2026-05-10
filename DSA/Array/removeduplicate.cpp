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
    void removeduplicate()
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(array[j]>array[j+1])
                {
                    int temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        }
        if(n==0)
        {
            return;
        }
        int s=0;
        for(int p=1;p<n;p++)
        {
            if(array[p]!= array[s])
            {
                s++;
                array[s]=array[p];
            }
        }
        cout<<"The array after removing duplicate values are: "<<endl;
        for(int q=0;q<=s;q++)
        {
            cout<<array[q]<<" ";
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
    obj.removeduplicate();
    return 0;
}