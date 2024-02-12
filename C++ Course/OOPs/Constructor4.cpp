#include <iostream>
using namespace std;


class complex{
    int x,y;
    public:
    complex(int a,int b){
        x=a;
        y=b;
    }
    void getData(){
        cout<<"The value of x is :"<<x<<endl<<"The value of y is:"<<y<<endl;
    }
};


int main(){

    //Implicit call
    complex c1(1,3);
 
    //Explicit call
    complex c2 = complex(2,5);

    return 0;
}