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

void deleteNode(Node *head , int i){
    Node *temp = head;
    int count = 0;
    while(count < i - 1){
        temp = temp -> next;
        count ++;
    }
    Node *x = temp -> next;
    Node *y = x -> next;

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


int main(){

    Node *head = takeInput();
    print(head);
    int i, data;
    cin>>i>>data;
    insertNode(head, i, data);
    print(head);
    deleteNode(head , i);
    print(head);

    return 0;
}