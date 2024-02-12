#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    // constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    // Destructor
    ~Node(){
        int value=this->data;
        // memory free
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for "<<value<<endl;
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


void insertAtPosition(Node * &tail,Node * &head,int position,int d){
    
    Node * temp =head;
    int cnt=0;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    // For insertion at position at 1 or head
    for(position == 1){
        insertAtHead(head,d);
        
    }

    // insertion at last node (here we do not know what is our last node)
    if(temp -> next == NULL){
        insertAtTail(tail,d);
    }

    // Creating new node
    Node * nodeToInsert = new Node(d);

    nodeToInsert->next=temp->next;
    temp->next = nodeToInsert;  

}



void deleteNode(Node *head,int position){

    // deletion at first node
    if(position == 1){
        Node *temp =head;
        head=head->next;
        // memory free start node
        temp->next=NULL:
        delete temp;       
    }
    // deletion at remaining node
    else{
        Node *curr=head;
        Node *prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
        }
        cnt++;
        curr->next=NULL;
        prev->next=curr->next;
    }

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
    /* cout<<node1->data<<endl;
    cout<<node1->next<<endl; */

    // point head to node1
    Node *head = node1;
    Node *tail = node1;



    print(head);

    insertAtHead(head,12);
    print(head); 


    insertAtTail(tail,15);
    insertAtTail(tail,20);
    insertAtTail(tail,25);
    print(head);


    // This is for generic code
    insertAtPosition(tail,head,3,11);
    print(head); 
   
    return 0;
}