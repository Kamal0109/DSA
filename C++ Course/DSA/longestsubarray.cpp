// Brute force method

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

int getLongestSubarray(vector<int>&a,long long k){

    int n=a.size();

    int len=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            
            long long s=0;

            for(int l=0;l<=j;l++){

                s+=a[l];

            }           

            if(s==k){
                len=max(len,j-i+1);
            }
        }
    }

    return len;


}


int main(){


    vector<int> a={2,3,5,1,9};

    long long k=10;

    int len=getLongestSubarray(a,k);

    cout<<len<<endl;   

   
 
    return 0;
}