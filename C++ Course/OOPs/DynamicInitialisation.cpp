#include <iostream>
using namespace std;


class A{
     public:
    A(){
        cout<<"A is called"<<endl;
    }

};


class B : public A{
     public:
    B(){
        cout<<"B is called"<<endl;
    }

};


class C : public B{
     public:
    C(){
        cout<<"C is called"<<endl;
    }

};


class D : public B{
     public:
    D(){
        cout<<"D is called"<<endl;
    }

};


class E : public B{
     public:
    E(){
        cout<<"E is called"<<endl;
    }

};


class F : public D, public C, public E{
    public:
    F(){
        cout<<"F is called"<<endl;
    }

};


 
int main(){
 
   F c;

    return 0;
}