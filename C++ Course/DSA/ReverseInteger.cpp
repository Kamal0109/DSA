#include <bits/stdc++.h>
using namespace std;


void reverseInteger(int &n){
    int ans = 0;
    int i = 0;
    while(n != 0){
        int digit = n % 10;
        ans = (10 * ans) + digit;
        n = n/10;
    }
    cout<<ans<<endl;
}

 
int main(){

    int n;
    cin>>n;
    reverseInteger(n);
 
    return 0;
}