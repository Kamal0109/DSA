#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};


void insertAtHead(Node * &head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;

}


void insertAtTail(Node * &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}


void print(Node *head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl;
}


int main(){

    // Create new node
    Node * node1=new Node(10);
    
    Node *head = node1;
    Node *tail = node1;

    print(head);  
    insertAtTail(tail,15);
    insertAtTail(tail,20);
    insertAtTail(tail,25);
    insertAtTail(tail,30);
    print(head);

    return 0;
}
