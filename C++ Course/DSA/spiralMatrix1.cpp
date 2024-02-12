#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    
    int n,m,k;
    cin>>n>>m>>k;

    int left=0;
    int right=n-1;
    int top=0;
    int bottom=m-1;
    int count=0;
    int total=m*n;

    while(count<k && count<total){
        for(int i=left;i<right;i++){
            if(count<k){
                count++;
            }
        }
        top++;
    }


   
    return 0;
}