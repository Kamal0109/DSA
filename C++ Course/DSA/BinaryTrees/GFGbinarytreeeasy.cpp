#include <iostream>
using namespace std;
 

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    // Constructor
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

int main(){

    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    
 
    return 0;
}