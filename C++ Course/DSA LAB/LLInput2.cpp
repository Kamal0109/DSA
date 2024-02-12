#include <iostream>
using namespace std;


class Node{
    public :
    int data;
    Node* next; 

    Node(int data){
        this ->data = data;
        next = NULL;
    }
}; 


Node* takeInput(){
    int data;
    cin>>data;
    Node* head = NULL;
    while(data != -1){
        Node n(data);
        if(head == NULL){
            head = &n;
        }
        head = &n;

        cin>>data;
    }

}


void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<"     ";
        temp = temp ->next;
    }
}


int main(){
    // printing function
    printLinkedList(head);

    return 0;
}