#include <iostream>
using namespace std;
 

class Node{
    public:
    int data;
    Node * next;
    Node(int d){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }

};


int main(){
 
 
    return 0;
}