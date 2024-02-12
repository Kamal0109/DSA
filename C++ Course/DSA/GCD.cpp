#include <iostream>
using namespace std;
 

int gcd(int a,int b){

    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a!=b){
        if(a>b){
            gcd(a-b,b);
        }
        if(b<a){
            gcd(a,b-a);
        }
    }
    return b;

}


int main(){

    cout<<gcd(3,6);

   
    return 0;
}