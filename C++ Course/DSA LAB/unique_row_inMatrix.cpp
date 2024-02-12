#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
   
    int row,col;
    cin>>row>>col;
    int Matrix[row][col];

    vector<vector<int>>ans;
    map<vector<int>,int>mp;

    for(int i=0;i<row;i++){
        vector<int>temp;
        for(int j=0;j<col;j++){
            temp.push_back(Matrix[i][j]);
        }
        if(mp[temp]==0){
            ans.push_back(temp);
        }
        mp[temp]++;
    }

    
 
    return 0;
}