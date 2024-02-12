#include <iostream>
using namespace std;

int main() {
    int a[10];
    a[0] = 4;
    int *p = &a[0];
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<&a[0]<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<a[0]<<endl;
    return 0;
}