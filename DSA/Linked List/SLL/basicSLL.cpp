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
};
int main()
{
    LinkedList obj;
    return 0;
}