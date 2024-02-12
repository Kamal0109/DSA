#include <iostream>
using namespace std;

int main() {
    //Pointer 
    int num = 5;
    int *p = &num;
    cout<<num<<endl;
    cout<<"Address of Num is "<<&num<<endl;
    //  & is used to print address of the variable 
    //  *p is used to print the value of the variable
    cout<<"Address of num is : "<<p<<endl;
    cout<<"Value of Number :"<<*p<<endl;
    cout<<"Size of p is : "<<sizeof(p)<<endl;
    int i = 5;
    int *q = &i;
    cout<<"Address of i is : "<<&i<<endl;
    cout<<"Address of i is : "<<q<<endl;
    cout<<"Value of i is :"<<*q<<endl;
    cout<<"size of "<<sizeof(q)<<endl;
    char j = 'a';
    char *r = &j;
    cout<<"Size of r is "<<sizeof(r)<<endl;
    int a[10];
    a[0] = 5;
    cout<<a<<endl<<&a[0]<<endl<<*a<<endl;
    // this will give you the first address 
    // Now we will get second address
    a[1] = 4;
    // Difference between a and p 
    cout<<"second address :"<<*(a+1)<<endl;
    cout<<sizeof(p)<<endl<<sizeof(a)<<endl;

    return 0;
}