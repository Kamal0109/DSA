#include <iostream>
using namespace std;

class Node{

    public :
    int data;
    Node *next;

    // Constructor usage
    Node(int data ){
        this -> data = data;
        this -> next = NULL;
    }
};


void reverse(Node *&head , Node* curr , Node* pre){
    // base case
    if(curr == NULL){
        head = prev;
        return;

    }   

    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
     

}



Node* reverseLL(Node* head ){
       Node* curr = head;
       Node* prev = NULL;
       reverse(head, curr, prev);
       return head;
} 


// This is by iteration method
Node* reverseLinkedList(Node *head ){
    if(head == NULL || head -> next = NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != 0){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;

    }
    return prev;
}

int main(){
    Node *node1 = new Node();
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;

    return 0;
}