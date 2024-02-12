#include <iostream>
using namespace std;
 

class complex{
    int real;
    int imag;
    public:
    complex(int real,int imag){
        this->real=real;
        this->imag=imag;
    }
    void showData(){
        cout<<"Real  "<<real<<endl;
        cout<<"imag  "<<imag<<endl;
    }
};


int main(){

    complex c1(1,2);
    complex *p;
    p=&c1;
    p->showData();
 
    return 0;
}