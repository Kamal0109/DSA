#include <iostream>
using namespace std;


class A{
    public:
    void f1(){
        cout<<"f1 of A is called "<<endl;
    }
    void f2(){
        cout<<"f2 of A is called "<<endl;
    }
};


class B:public A{
    public:
     void f1(){             // Method overriding
         cout<<"f1 of B is called "<<endl;
     }
    void f2(int x){        // Method Hiding
        cout<<"f2 of B is called "<<endl;
    }
};

 
int main(){
  
    B obj;
    obj.f1();
    obj.f2(5);     
   //   obj.f2();   this will show error
   
    return 0;
}