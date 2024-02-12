#include <iostream>
using namespace std;
 

int PowMod(int x,int n,int M){
    int res=1;
    while(n>0){
        if(n&1){
        res=(res*x%M)%M;
    }
    x=(x%M*x%M)%M;
    n=n>>1;        
    }	
    return res;	        
}


int main(){
 

   int x,n,M;
   cin>>x>>n>>M;
   int ans=PowMod(x,n,M);
   cout<<ans;
 
    return 0;
}