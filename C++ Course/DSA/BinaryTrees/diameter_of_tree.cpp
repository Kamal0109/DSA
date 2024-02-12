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

// First method



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



void buildLevelOrderTraversal(Node* &root){
    queue<Node*>q;
    cout<<"Enter the data for root"<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        int leftData;
        cout<<"Enter the left Node for "<<temp->data<<endl;
        cin>>leftData;
        if(leftData!=1){
            temp->left=new Node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout<<"Enter the right Node for"<<temp->data<<endl;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new Node(rightData);
            q.push(temp->right);
        }

   

    }
}



int main(){

    Node* root=NULL;
    buildLevelOrderTraversal(root);

    levelOrderTraversal(root);

    return 0;
}


