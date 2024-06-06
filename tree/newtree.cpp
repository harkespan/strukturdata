#include<iostream>

using namespace std;

struct Node {
  int data;
  Node* left;
  Node* right;
};

Node* createNode(int data) {
  Node* newNode = new Node;
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

Node* insertNode(Node* root, int data) {
  if (root == NULL) {
    root = createNode(data);
  } else if (data <= root->data) {
    root->left = insertNode(root->left, data);
  } else {
    root->right = insertNode(root->right, data);
  }
  return root;
}

void preOrder(Node* current)
{
    if(current!=NULL)
    {
        cout<<current->data<<" ";
        preOrder(current->left);
        preOrder(current->right);
    }
}

void inOrder(Node* current)
{
    if(current!=NULL)
    {
        inOrder(current->left);
        cout<<current->data<<" ";
        inOrder(current->right);
    }
}

void postOrder(Node* current)
{
    if(current!=NULL)
    {
        postOrder(current->left);
        postOrder(current->right);
        cout<<current->data<<" ";
    }
}

int main() {
  Node* root = NULL;
  root = insertNode(root, 5);
  root = insertNode(root, 3);
  root = insertNode(root, 7);
  root = insertNode(root, 2);
  root = insertNode(root, 4);
  root = insertNode(root, 6);
  root = insertNode(root, 8);

  cout<<"Pre order: ";
  preOrder(root);
  cout<<endl;
  cout<<"In order: ";
  inOrder(root);
  cout<<endl;
  cout<<"Post order: ";
  postOrder(root);
  cout<<endl;
  return 0;
}
