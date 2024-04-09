// memoization 
// TC: O(N)(there will be linear recursive call)
// SC: O(N)(Recursion stack)+O(N)(Vector)

#include <bits/stdc++.h>
using namespace std;

int f(int n,vector<int> &dp){
    // base case
    if(n<=1) return n;

    // step 2 : check if it is present in dp
    if(dp[n]!=-1) return dp[n];

    // store the function in dp
    return dp[n]=f(n-1,dp)+f(n-2,dp);
}
 
 
int main(){

    int n;
    cin>>n;
    vector<int> dp(n+1,-1);     

    cout<<f(n,dp);
 
    return 0;
}