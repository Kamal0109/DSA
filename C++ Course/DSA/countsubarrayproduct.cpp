#include <iostream>
using namespace std;
 

int product(int a[],int i,int j){
    int ans=1;
    for(int k=i;k<=j;k++){
      ans=(ans*a[k]);
    }
    return ans;
}


int main(){

    int n,k;
    cin>>n>>k;
    int a[4]={1,2,3,4};
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int pr=product(a,i,j);
            if(pr<k){
               count++;
            }
        }
    }

    cout<<count;

    return 0;
}