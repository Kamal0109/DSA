#include<iostream>
using namespace std;

int main()
{
    int i = 5;
    cout<<&i<<endl;
    
    int * p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;

    cout<<sizeof(p)<<endl;   // This is used to find the size of the pointer variable

    i=i+1;
    cout<<i<<endl;
    cout<<*p<<endl;

    return 0;
}