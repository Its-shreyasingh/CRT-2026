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
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
    void addelements(int element)
    {
        Node *newnode=new Node(element);
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
    void addatposition(int value,int position)
    {
        //creation
        Node *newnode=new Node(value);
        if (position <= 1 || head == nullptr) {
            newnode->next = head;
            head = newnode;
            return;
        }
        //Connection
        Node* runner =head;
        for(int i=1;i<position-1;i++)
        {
            if(runner->next !=nullptr)
            {
                runner=runner->next;
            }
        }
        newnode->next=runner->next;
        runner->next=newnode;
        
    }
    void add(int value,int position)
    {
        addatposition(value,position);
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
};
int main()
{
    LinkedList obj;
    int element;
    int n;
    int position;;
    cout<<"Enter the number of elements to be  inserted: ";
    cin>>n;
    cout<<"Enter the values"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        obj.addelements(element);
    }
    cout << "Current List: ";
    obj.traverse();
    int value;
    cout<<"Enter the value and position at which element has to be inserted : ";
    cin>>value;
    cin>>position;
    cout << "Updated List: ";
    obj.add(value,position);
    obj.traverse();
    return 0;
}