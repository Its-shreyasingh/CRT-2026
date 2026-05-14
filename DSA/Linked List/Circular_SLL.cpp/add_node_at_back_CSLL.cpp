#include<iostream>  //Circular SLL
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
        if (head == nullptr) return;

        Node* current = head;
        Node* nextNode;
        
        // Find the last node and break the circle
        Node* tail = head;
        while (tail->next != head) {
            tail = tail->next;
        }
        tail->next = nullptr; 

        // Now delete like a standard SLL
        while (current != nullptr) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }
        head = nullptr;

    }
    void addatback(int value)
    {
        Node *newnode=new Node(value);
        if(head == nullptr)
        {
            head=newnode;
            newnode->next=head;
        }else{
            Node* temp=head;
            while(temp->next !=head)
            {
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->next=head;
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
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << "(back to head: " << head->data << ")" << endl;
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
    cout << "Current Circular List: ";
    obj.traverse();
    return 0;
}