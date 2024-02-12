#include <iostream>
using namespace std;
 

class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;               
    }
};


// Printing the LL
void print(Node * &head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}


// Find the length of LL
void getLength(Node *head){
    Node * temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    cout<<cnt<<endl;
}



// Insert Node at LL At head
void insertAtHead(Node * &head,int d){
    Node * temp = new Node(d);
    temp->next=head;
    if(head != NULL){
        head->prev=temp;
    }
    
    head=temp;
}



// Insert node at end of LL
void insertAtEnd(Node * &head,int d){
    Node * temp1 = new Node(d);
    
    if (head == NULL) {
        head = temp1;
        return;
    } 
    Node * temp = head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=temp1;
    temp1->prev=temp;
}



// Insert node a position in a LL
void insertAtPosition(int * &head, int position,int d){
    Node * temp1 = new Node(d);
    Node * temp = head;
    int cnt=1;
    // For insertion at position at 1 or head
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    // For insertion at tail
    if(temp->next!=NULL){
        insertAtEnd(tail,d);
        return;
    }

    temp1->next=temp->next;
    temp->next->prev=temp1;
    temp->next=temp1;
    temp1->prev=temp;

}



int main(){

    Node * node1 = new Node(10);
    Node * head = node1;
    print(head);
    getLength(head);

    insertAtHead(head,5);
    print(head);

    insertAtEnd(head,15);
    print(head);


 
    return 0;
}