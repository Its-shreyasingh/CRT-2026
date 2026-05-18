#include<iostream>                  //TRAVERSAL:- Inorder,Preoder,Postorder
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
    void printInorderData(Node* root)
    {
        if(root==nullptr)
        {
            return;
        }
        printInorderData(root->left);
        cout<<root->data<<" ";
        printInorderData(root->right);
    }
    void printPreorderData(Node* root)
    {
        if(root==nullptr)
        {
            return;
        }
        cout<<root->data<<" ";
        printInorderData(root->left);
        printInorderData(root->right);
    }
    void printPostorderData(Node* root)
    {
        if(root==nullptr)
        {
            return;
        }
        printInorderData(root->left);
        printInorderData(root->right);
        cout<<root->data<<" ";
    }
    void insertdata(int value)
    {
        root=addNodeRecursive(root,value);
    }
    void display() {
        cout<<"Pre-Order Traversal: ";
        printPreorderData(root);
        cout<<"\nIn-Order Traversal: ";
        printInorderData(root);
        cout<<"\nPost-Order Traversal: ";
        printPostorderData(root);
        cout << endl;
    }
};
int main()
{
    binarytree obj;
    obj.insertdata(10);
    obj.insertdata(20);
    obj.insertdata(30);
    obj.insertdata(40);
    obj.insertdata(50);
    obj.display();
    return 0;
}
/*           10
            /  \
          20   30
         /  \
        40  50
        
*/