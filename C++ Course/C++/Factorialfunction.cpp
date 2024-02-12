#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int fact(int n){
    int ans =  1;
    for(int i = 1; i <= n ; i++){
        ans = ans * i; 
    }
    return ans;
}


int main(){
    int n,r;
    cin>>n>>r;
    int x = fact(n);
    int y = fact(n-r);
    int z = fact(r);

    int sol = x / (y*z);

    cout<<sol<<endl;
  
  return 0;
}


