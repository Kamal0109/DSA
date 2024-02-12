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



class stack{
    public:
    Node *top;
    stack(){
        top=NULL;
    }
    void push(int data){
        Node *temp=new Node(data);
        if(!temp){
            cout<<"Stack overflow "<<endl;
        }
        temp->data=data;
        temp->next=top;
        top=temp;
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack underflow "<<endl;
        }
        else{
            
        }

    }
    void peek(){

    }
    bool isEmpty(){

    }


};



int main(){
   
    
 
    return 0;
}