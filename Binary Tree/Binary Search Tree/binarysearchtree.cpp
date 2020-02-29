#include<iostream>
using namespace std;
class node
{
    public:
        int data;
        node* left;
        node* right;
    node(){
        data=0;
        left=right=NULL;
    }
};

node* AddNode(node* root, int data)
{

    if (root == NULL)
    {
        node* n = new node();
        root=n;
        n->data=data;

    }
    else if (data <= root->data)
    {
        root->left = AddNode(root->left,data);
    }
    else if  (data > root->data)
    {
        root->right = AddNode(root->right,data);
    }
    return root;
}

void inorder(node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->data<< " ";
        inorder(root->right);

    }
}

int main ()
{
    int n;
    cout<<"Enter the number of nodes";
    cin>>n;
    node* root;
    int a[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
        root=AddNode(root,a[i]);
    }
    cout <<"inorder is: " ;
    inorder(root);
    cout<<endl;
}
