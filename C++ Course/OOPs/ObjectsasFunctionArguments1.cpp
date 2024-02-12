#include <iostream>
using namespace std;


class complex{

    int a;
    int b;

    public:
    void setData(int v1, int v2){
       a = v1;
       b = v2;
    }
    void setDataSum(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printData(){
        cout<<"Your Complex No is "<<a<<" + "<<b<<" i "<<endl;
    }
};


int main(){
   
    complex c1, c2, c3;
    c1.setData(1,3);
    c2.setData(2,4);
    c3.setDataSum(c1,c2);
    c1.printData();
    c2.printData();
    c3.printData(); 
    

    return 0;
}