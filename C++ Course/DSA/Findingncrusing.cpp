#include <iostream>
using namespace std;
 

int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}


int nCr(int n,int r){
    int a=factorial(n);
    int b=factorial(r);
    int c=factorial(n-r);
    int answer=a/(b*c);
    return answer;
}


int main(){

    int n,r;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the value of r:"<<endl;
    cin>>r;
    cout<<nCr(n,r)<<endl; 
    
 
    return 0;
}