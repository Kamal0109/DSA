#include <iostream>
using namespace std;

void primefactors(int n){
    while(n%2 == 0){
        n = n/2;
        cout<<2<<" "<<endl;
    }
    for(int a= 3; a < n; a++){
        while(n%a == 0){
            n = n/a;
            cout<<a<<endl;
        }
    }

}
int main() {
    int n = 20;
    primefactors(n);
    return 0;
}