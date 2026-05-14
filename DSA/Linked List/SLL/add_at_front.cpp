#include<iostream>
using namespace std;
class LinkedList
{
    public:
    class Node
    {
        public:
        int data;
        Node *next;
        Node(int value)
        {
            data =value;
            next=nullptr;
        }
    };
    Node *head;
    public:
    LinkedList()
    {
        head=nullptr;
    }
    ~LinkedList()
    {
        Node* temp;
        while(head!=NULL)
        {
            temp=head;
            head=head->next;
            head->next=temp;
            delete temp;
        }

    }
    void addatfront(int n)
    {
        Node *newnode=new Node(n);
        if(head == nullptr)
        {
            head=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }
    void add(int value)
    {
        addatfront(value);
    }
    void traverse()
    {
        Node *temp=head;
        if (temp == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        while(temp !=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
    LinkedList obj;
    int value;
    int n;
    cout<<"Enter the number of elements to be  inserted: ";
    cin>>n;
    cout<<"Enter the values"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        obj.add(value);
    }
    cout << "Current List: ";
    obj.traverse();
    return 0;
}