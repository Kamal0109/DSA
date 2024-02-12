#include <iostream>
using namespace std;

int exponential(int n , int x){
    if(n==0){
        return 1;
    }
    int smalloutput = exponential(n-1, x);
    smalloutput = x * exponential(n-1, x);
    return  smalloutput;
}
int main(){
    int x = 2;
    int n = 5;
    cout<<exponential(n , x);
    
}
