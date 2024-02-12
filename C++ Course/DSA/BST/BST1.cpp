#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertToBST(Node* root, int d) {
    if (root == NULL) {
        root = new Node(d);
        return root;
    }

    if (root->data < d) {
        root->right = insertToBST(root->right, d);
    } else {
        root->left = insertToBST(root->left, d);
    }

    return root;
}

void takeInput(Node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertToBST(root, data);
        cin >> data;
    }
}

void levelOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left) {
            q.push(temp->left);
        }
        if (temp->right) {
            q.push(temp->right);
        }
    }
}


Node* minValue(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}


Node* deleteFromBST(Node* root,int key){

    if(root==NULL) return root;
    if(root->data==key){
        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child
        // Left
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        // Right
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini=minValue(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;

        }

    }
    
    else if(root->data > key){
        root->left=deleteFromBST(root->left,key);
        return root;
    }
    else{
        root->right=deleteFromBST(root->right,key);
    }

    return root;
}


Node* maxValue(Node *root){
    Node* temp = root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

int main() {
    Node* root = NULL;

    cout << "Enter the data to be inserted in BST" << endl;
    takeInput(root);

    levelOrderTraversal(root);

    // Finding min value of BST
    cout<<minValue(root)->data<<endl;

   // Finding min value of BST
    cout<<maxValue(root)->data<<endl;

    return 0;
}




