// Friend Function
//Kamal Kumar Tiwari
//21312
//Friend Function in c++

 
#include <iostream>
using namespace std;

// Forward declaration 
class complex;

class calculator{

    public :
    int add(int a, int b){
        return(a+b);
    }
    int sumRealComplex(complex , complex );

};


class complex{ 
    
    int a,b;

    public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printNumber(){
        cout<<"No is "<<a<<" + "<<b<<"i"<<endl;
    }
    friend complex sumcomplex(complex o1, complex o2);
    friend int calculator :: sumRealComplex(complex o1, complex o2);
     
};


int calculator :: sumRealComplex(complex o1, complex o2){
        return (o1.a+o2.a);
    }   


complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}


int main(){
    
    complex c1;
    complex c2;
    complex sum;
    c1.setNumber(1,3);
    c2.setNumber(4,3);

    c1.printNumber();
    c2.printNumber();

    sum = sumcomplex(c1,c2);
    sum.printNumber();

    calculator s1;
    int res = s1.sumRealComplex(c1,c2);
    cout<<res;


    return 0; 
}