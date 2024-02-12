#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int n=6;
    int a=0;
    int b=1;
    int nextNo=0;
    for(int i=0; i<n;i++){
        nextNo=0;
        nextNo=a+b+nextNo;
        a=b;
        b=nextNo;
    }
    cout<<nextNo<<endl;

    return 0;
}