#include <iostream>
using namespace std;

int factorial(int n){
    cout<<n<<endl;
    if(n == 0){
        return 1 ;
    }
    int small_output;
    small_output = factorial(n-1);
    return n * small_output;
}

int main(){
    int n;
    cin>>n;
    int output = factorial(n);
    cout<<output<<endl;
    return 0;
}
