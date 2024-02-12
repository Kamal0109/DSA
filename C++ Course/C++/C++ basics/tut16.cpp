#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node (int x)
    {
        data = x ; 
        next = NULL;
    }
};

void printList(Node *head)
{    
    Node *curr = head;
    while(curr != NULL){
        cout<<curr->next;
    }

}

int main()
{
    Node *head = new Node(10);
    Node *first = new Node(20);
    Node *second = new Node(30);
    head -> next = first;
    printList(head); 
    first -> next = second;
    return 0;
}