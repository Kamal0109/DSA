#include <iostream>
using namespace std;


class complex{
    
    int real,imaginary;

    public :
    void getData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
};


int main(){
    
    complex c1;
    complex *ptr = &c1;
    (*ptr).setData(1,54);
    ptr->getData();

    return 0;
}