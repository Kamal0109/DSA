#include <iostream>
using namespace std;


class stack{
    public:
    // properties
    int *arr;
    int top;
    int size;

    // constructor
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is overflow"<<endl;
        }

    }

    void pop(){
        if(top>-1){
            top--;
        }
        else{
            cout<<"Stack is underflow"<<endl;
        }

    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty "<<endl;
        }
        
    }

    bool isEmpty(){
       if(top==-1){
        return true;
       }
       else{
        return false;
       }
    }

};
 
int main(){

    stack st(5);
    st.push(10);
    st.push(15);
    st.push(20);

    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;


    cout<<st.isEmpty();
    


 
    return 0;
}