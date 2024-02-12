#include <iostream>
using namespace std;


void solve(vector<int>& nums,int index, vector<vector<int>>&ans){
    // Base case
    if(index>=nums.size()){
        ans.push_back(ans);
        return;
    }

    for(int j=index;j<nums.size();j++){
        swap(nums[index],nums[j]);
        solve(nums,index,ans);
        // backtracking
        swap(nums[index],nums[j]);
    }

}

vector<vector<int>> permute(vector<int>& nums){

    vector<vector<int>>ans;
    int index=0;
    solve(nums,index,ans);
        
}


int main(){

    vector<int>nums;
    permute(nums); 
 
    return 0;
}