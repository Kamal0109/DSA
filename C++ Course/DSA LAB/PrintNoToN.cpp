#include <iostream>
using namespace std;

int Sum(int n){
    if(n==0){
        return 0;
    }
    int next = Sum(n-1);
    next = n + Sum(n-1);
    return next;
}

int main(){
    int n = 4;
    cout<<Sum(n);
}