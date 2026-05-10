#include<iostream>          //SUM OF CORNER ELEMENTS
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
    void sumcorner()
    {
        int sum=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if((i==0 || i==r-1) && (j==0 ||j==c-1))
                {
                    sum=sum+array[i][j];
                }
            }
        }
        cout<<"Sum of the corner elements: "<<sum<< endl;
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
    obj.sumcorner();
    return 0;
}