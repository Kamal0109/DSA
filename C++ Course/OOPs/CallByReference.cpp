// Swapping of number using call by reference
// Kamal Kumar tiwari
// 21312
// 23/2/23

#include <iostream>
using namespace std;


void swap(int &a, int &b){
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}

int main(){

    int a = 2;
    int b = 3;

    swap(a,b);

    cout<<"value of a after swaping a "<<a<<endl;
    cout<<"Value of b after swaping b "<<b<<endl;    
    

    return 0;
}