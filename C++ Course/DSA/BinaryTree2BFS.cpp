// Breadth First Search

#include <iostream>
#include <queue>
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


Node* buildTree(Node* root){

    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    

    root=new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting to left of "<<data<<endl;
    root->left=buildTree(root->left);

    cout<<"Enter data for inserting to right of "<<data<<endl;
    root->right=buildTree(root->right);

    return root;


}


void levelOrderTraversal(Node *root){
    
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
       
        q.pop();
        if(temp==NULL){
            cout<<endl; // separter 
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
            }
           if(temp->right){
            q.push(temp->right);
            }
        }
        
    }

}


void inorder(Node* root){

    // Base case
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}


void preorder(Node* root){

    // Base case
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(Node* root){

    // Base case
    if(root==NULL){
        return;
    }

   
    postorder(root->left);
    postorder(root->right);
     cout<<root->data<<" ";
}


void buildfromLevelOrder(Node* &root){
    queue<Node*>q;
    cout<<"Enter the data for root "<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        cout<<"Enter the left node for"<<root->left<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left=new Node(leftData);
            q.push(temp->left);
        }   

        cout<<"Enter the right node for "<<root->right<<endl;
        int rightData;
        cin>>rightData;
        
        if(rightData!=-1){
            temp->right=new Node(rightData);
            q.push(temp->right);
        }

    }

}


int main(){

    Node* root=NULL;
   
    root=buildTree(root); 

   // levelOrderTraversal 
   // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
   cout<<"Level order traversal "<<endl;
   levelOrderTraversal(root);

   cout<<"Inorder traversal"<<endl;
   inorder(root);  
   
   cout<<endl<<"Preorder traversal "<<endl;
   preorder(root);

   cout<<endl<<"Postorder traversal"<<endl;
   postorder(root);

 
    return 0;
}