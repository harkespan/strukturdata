#include<iostream>

using namespace std;

struct Tree{
    int data;
    Tree *right;
    Tree *left;
};

Tree *nodeBaru, *root=NULL ;

Tree *buatNode(int data)
{
    nodeBaru = new Tree();
    nodeBaru->data = data;
    nodeBaru->left = NULL;
    nodeBaru->right = NULL;
    root = nodeBaru;
    return nodeBaru;
}

bool isEmpty(){
    if(root==NULL){
        return true;
    }
    else{
        return false;
    }
}

void tambahNode(Tree *node, int data, string pos){
    if(isEmpty())
    {
        root = buatNode(data);
    }
    else
    {
        nodeBaru = new Tree();
        nodeBaru->data = data;
        nodeBaru->left = NULL;
        nodeBaru->right = NULL;
        if(pos == "left")
        {
            node->left = nodeBaru;
        }
        else
        {
            node->right = nodeBaru;
        }
    }
}

void preOrder(Tree *node)
{
    if(isEmpty())
    {
        cout<<"Tree masih kosong"<<endl;
    }
    else
    {
        if(node!=NULL)
        {
            cout<<node->data<<" ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
}

void inOrder(Tree *node)
{
    if(isEmpty())
    {
        cout<<"Tree masih kosong"<<endl;
    }
    else
    {
        if(node!=NULL)
        {
            inOrder(node->left);
            cout<<node->data<<" ";
            inOrder(node->right);
        }
    }
}

void postOrder(Tree *node)
{
    if(isEmpty())
    {
        cout<<"Tree masih kosong"<<endl;
    }
    else
    {
        if(node!=NULL)
        {
            postOrder(node->left);
            postOrder(node->right);
            cout<<node->data<<" ";
        }
    }
}

int main()
{
    Tree *leaf;
   leaf=buatNode(5);
   preOrder(leaf);
    return 0;
}
