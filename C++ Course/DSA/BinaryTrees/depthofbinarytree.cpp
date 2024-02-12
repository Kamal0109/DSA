#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data=d;
        left=NULL;
        right=NULL;
    }
};


Node* buildBinaryTree(Node* root){
    int data;
    cout<<"Enter the data "<<endl;
    cin>>data;

    root=new Node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the value for left of "<<data<<endl;
    root->left=buildBinaryTree(root->left);
  
    cout<<"Enter the value for right of "<<data<<endl;
    root->right=buildBinaryTree(root->right);

    return root;

}


int main(){

    Node* root=NULL;
    buildBinaryTree(root);
    
    return 0;
}