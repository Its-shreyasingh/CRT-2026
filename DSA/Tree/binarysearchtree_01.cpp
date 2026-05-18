#include<iostream>
using namespace std;
class binarytree
{
    public:
    class Node
    {
        public:
        int data;
        Node *left;
        Node* right;
        Node(int value)
        {
            data =value;
            left=nullptr;
            right=nullptr;
        }
    };
    Node *root;
    public:
    binarytree()
    {
        root=nullptr;
    }
    ~binarytree()
    {
        delete root;
    }
    Node* addNodeRecursive(Node* root,int value)
    {
        if(root == nullptr)
        {
            return new Node(value);
        }
        if(value < root->data)
        {
            root->left=addNodeRecursive(root->left,value);
        }
        else if(value > root->data)
        {
            root->right=addNodeRecursive(root->right,value);
        }
        return root;
    }
    void printData(Node* root)
    {
        if(root==nullptr)
        {
            return;
        }
        printData(root->left);
        cout<<root->data<<" ";
        printData(root->right);
    }
    void insertdata(int value)
    {
        root=addNodeRecursive(root,value);
    }
    void display() {
        printData(root);
        cout << endl;
    }
};
int main()
{
    binarytree obj;
    obj.insertdata(20);
    obj.insertdata(30);
    obj.insertdata(40);
    obj.insertdata(50);
    obj.insertdata(60);
    
    cout<<"The tree is:";
    obj.display();
    return 0;
}