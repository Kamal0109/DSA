#include <iostream>
using namespace std;


int main(){
    int i = 5;
    cout<<&i<<endl;
 
    int * p = &i;
    cout<<p<<endl;

    char a = 'Kamal';

    // Derefrencing operator
    cout<<*p<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(i)<<endl;
    cout<<sizeof(p)<<endl;

    int * q = p;
    cout<<q<<"  "<<*q<<endl;      // *q,*p,i have same value

    return 0;
}