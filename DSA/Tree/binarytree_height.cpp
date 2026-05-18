#include<iostream>                                 //Height of the tree
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
        if(root->left==nullptr)
        {
            root->left=addNodeRecursive(root->left,value);
        }
        else if(root->right==nullptr)
        {
            root->right=addNodeRecursive(root->right,value);
        }
        else{
            root->left=addNodeRecursive(root->left,value);
        }
        return root;
    }
    void insertdata(int value)
    {
        root=addNodeRecursive(root,value);
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
    void displaydata() {
        printData(root);
        cout << endl;
    }
    int height(Node* root)
    {
        if(root==nullptr)
        {
            return 0;
        }
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        return 1+max(leftHeight,rightHeight);
    }
    void displayheight()
    {
        int h=height(root);
        cout<<h<<endl;
    }
};
int main()
{
    binarytree obj;
    obj.insertdata(10);
    obj.insertdata(20);
    obj.insertdata(30);
    obj.insertdata(40);
    cout<<"The tree is:";
    obj.displaydata();
    cout<<"The height of the tree is: ";
    obj.displayheight();
    return 0;
}