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
        Node* temp=head;
        while(temp!=NULL)
        {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        head=nullptr;

    }
    void addatback(int value)
    {
        Node *newnode=new Node(value);
        if(head == nullptr)
        {
            head=newnode;
        }else{
            Node* temp=head;
            while(temp->next !=nullptr)
            {
                temp=temp->next;
            }
            temp->next=newnode;
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
        while(temp !=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void reverse ()             //ITERATIVE REVERSE
    {
        Node* prev=nullptr;
        Node* current=head;
        Node* nextTemp=nullptr;
        while(current !=nullptr)
        {
            nextTemp=current->next;
            current->next=prev;
            prev=current;
            current=nextTemp;
        }
        head=prev;
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
    obj.reverse();
    cout << "Reversed List: ";
    obj.traverse();
    return 0;
}