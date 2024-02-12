#include <iostream>
using namespace std;
#include "Node.cpp"

void printList(Node *head){
    while(head != NULL){
        cout<<head -> data<<endl;
        head = head -> next;
    }
}

int main(){
    // Statically 
    Node n1(1); 
    Node *head = &n1;
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    printList(head);

/*
    // To print this 
    cout<<n1.data<<"  "<<n2.data<<endl;
    // We can print with data with the held of head also
    cout<<head -> data; 

    // Dynamically
    Node *n3 = new Node(10);
    Node *head = n3;

    Node *n4 = new Node(20);
    n3 -> next = n4;
*/    
        
    return 0;
} 