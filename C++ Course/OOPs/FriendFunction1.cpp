#include <iostream>
using namespace std;


class complex;


class calculater{
   public:
   int sumRealComplex(complex , complex);
};


class complex{

    int a,b;
    public :
    void setData(int n1, int n2){
        a=n1;
        b=n2;
    }
    void getData(){
        cout<<a<<" "<<b<<endl;
    }
    friend complex sumComplex(complex o1, complex o2);
    friend cal
};


complex sumComplex(complex o1, complex o2){
   
}