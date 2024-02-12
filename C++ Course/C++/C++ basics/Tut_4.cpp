#include <iostream>
using namespace std;


int main(){
    int a[10] = {1,2,3,4,5};
    cout<<a<<endl;
    cout<<&a[0]<<endl;

    cout<<*a<<endl;
    cout<<*(a+1)<<endl;

    // Now or i th element 
    int i = 3;
    cout<<*(a+i)<<endl;
    cout<<a[i]<<endl;
    cout<<i[a]<<endl;

    cout<<a<<endl;
    cout<<&a<<endl;       
    
    // a,&a,&a[0] will give address of array

    int b[5] = {1,2,3,4,5};
    
    int * q = &a[0];

    cout<<sizeof(a)<<endl;
    cout<<sizeof(q)<<endl;

    cout<<a<<endl;
    cout<<q<<endl;

    cout<<&a<<endl;
    cout<<&q<<endl;


    return 0;
}