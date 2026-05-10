#include<iostream>
using namespace std;
class Array
{
    public:
    int r;
    int c;
    int ** array;
    Array(const int r,int c)
    {
        if(r>0&&c>0)
        {
            this->r=r;
            this->c=c;
            createArray();
        }
    }
    void createArray()
    {
        array = new int*[r];
        for(int i = 0; i < r; ++i) {
        array[i] = new int[c];
    }


    }
    void insert()
    {
        cout<<endl;
        cout<<"Enter the elements in the array: "<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>array[i][j];
            }
            cout<<endl;
        }
    }
    void printData() const{
        cout<<"The elements of the array are: "<<endl;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void deleteelement(int val)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(array[i][j]==val)
                {
                array[i][j]=-1;
                return; //delete only first occurence
                }
                
            }
        }
    }
    ~Array() {
        for (int i = 0; i < r; i++) {
            delete[] array[i];
        }
        delete[] array;
        cout << "\nMemory deallocated.";
    }
};
int main()
{
    int r;
    int c;
    cout<<"Enter the number of rows: "<<endl;
    cin>>r;
    cout<<"Enter the number of columns: "<<endl;
    cin>>c;
    Array obj(r,c);
    obj.createArray();
    obj.insert();
    obj.printData();
    int val;
    cout<<"Enter the value you want to delete :";
    cin>>val;
    obj.deleteelement(val);
    obj.printData();
    return 0;
}