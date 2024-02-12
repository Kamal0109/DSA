#include <iostream>
using namespace std;


class feetandinches{
    int feet;
    int inches;
    public:
    feetandinches(int a,int b){
        feet=a;
        inches=b;
    }
    int getfeet(){
        return feet;
    }
    int getinches(){
        return inches;
    }
    friend void sum(int a,int b); 
};


class mandcm{
    int m;
    int cm;
    public:
    mandcm(int a,int b){
        m=a;
        cm=b;
    }
    int getm(){
        return m;
    }
    int getcm(){
        return cm;
    }
    friend void sum(int a,int b);
};


void sum(int a,int b){
    a = a*12;
    b = b + a;
}


int main(){
    feetandinches f1(5,10);
    mandcm f2(10,5);
    int a,b,c,d;
    a = f1.getfeet();
    b = f2.getinches();
    c = f3.getm();
    d = f4.getcm();
    
    float sum;
    int meter;
    float centi;


    return 0;
}