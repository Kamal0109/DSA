//Constructor overloading
#include <iostream>
using namespace std;


class complex{
    int a,b;
    public:
    complex(){
        a=0;
        b=0;
    }
    complex(int x){
        a=x;
        b=0;
    }
    complex(int x,int y){
        a=x;
        b=y;
    }
    void getData(){
        cout<<a<<" + i"<<b<<endl;
    }
};


int main(){
    
    complex c1;
    c1.getData();
    complex c2(1);
    c2.getData();
    complex c3(2,3);
    c3.getData();
    
    return 0;
}