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
        Node* previous;
        Node(int value)
        {
            data =value;
            next=nullptr;
            previous=nullptr;
        }
    };
    Node *head;
    Node* tail;
    public:
    LinkedList()
    {
        head=nullptr;
        tail=nullptr;
    }
    ~LinkedList()
    {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = tail = nullptr;

    }
    void addatback(int value)
    {
        Node *newnode=new Node(value);
        if(head == nullptr)
        {
            head=tail=newnode;
        }else {
            tail->next = newnode;
            newnode->previous = tail;
            tail = newnode;
        }
    }
    void add(int value)
    {
        addatback(value);
    }
    void traverse()
    {
        Node *temp=head;
        if (temp == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        cout<<"From Head"<<endl;
        while(temp !=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        temp=tail;
        cout<<"\nFrom Tail"<<endl;
        //backward direction towards head
        while(temp !=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->previous;
        }
        cout<<endl;
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
    cout << "Current List: "<<endl;
    obj.traverse();
    return 0;
}