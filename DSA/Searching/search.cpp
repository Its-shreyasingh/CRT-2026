#include<iostream>
#include<algorithm>
using namespace std;
class searching{
    public:
    int linearsearch(int arr[],int val,int n)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==val)
            {
                return i;
            }
        }
        return -1;
    }
    int binarysearch(int arr[],int val,int n)
    {
        sort(arr, arr + n);
        cout<<"The sorted array for binary search:"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int start=0;
        int end=n-1;
        while(start<=end)
        {
        int mid=(start+end)/2;
        if(arr[mid]==val)
        {
            return mid;
        }
        else if(arr[mid]<val)
        {
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    searching s;
    int choice;
    cout<<"Enter the element to be searched:"<<endl;
    int val;
    cin>>val;
    cout<<"Enter the method to opt\n1.Linear Search\n2.Binary Search"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<val<<" is found at index: "<<s.linearsearch(arr,val,n);
            break;
        case 2:
            cout<<val<<" is found at index "<<s.binarysearch(arr,val,n);
            break;
        default:
            cout<<"Invalid choice";
            break;
    }
    return 0;
}