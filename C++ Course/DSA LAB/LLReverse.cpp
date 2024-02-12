// reverse  the elements of Linked List
#include <iostream>
using namespace std;
#include "Node.cpp"

Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }
        else{
            Node *temp = head;
            while(temp -> next != NULL){
                temp = temp -> next; 
            }
            temp -> next = newNode;
        }
        cin>>data;
    }
    return head;
} 


void insertNode(Node *head , int i , int data){
    Node *newNode = new Node(data);
    Node *temp = head;
    int count = 0;
    while(temp != NULL && count < i -1){
        temp = temp -> next;
        count ++;
    }
    if(temp != NULL){
    Node *a = temp -> next;
    temp -> next = newNode;
    newNode -> next = a;
    }
}

void print(Node *head){
     Node *temp = head;
    while( temp != NULL){
     cout<<temp -> data<<"  ";
     temp = temp -> next;   
    }
}


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

    Node *head = takeInput();
    print(head);
    int i, data;
    cin>>i>>data;
    insertNode(head, i, data);
    print(head);
    reverseLinkedList(head)

    return 0;
}