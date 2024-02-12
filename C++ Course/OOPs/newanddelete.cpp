#include <iostream>
using namespace std;
 

class complex{
    int real;
    int imag;
    public:
    complex(){

    }
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

    complex *ptr=new complex;
    
 
    return 0;
}   