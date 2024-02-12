#include <iostream>
using namespace std;


void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}


void increment(int *p){
    *p = *p + 1;
}

int main() {

    int a[5] = {1,2,3,4,5};
    int b = 0;
    int *p = &b;
    cout<<*p<<endl;

    increment(p);

    cout<<*p<<endl;

    return 0;
}