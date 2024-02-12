#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
  
    vector<int> nums={1,1,1,1,0,0,0,1,1,1,1,1};
    int cnt=0;
    int maxi=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            cnt++;    
        }
        else{
            cnt=0;
        }
        maxi=max(maxi,cnt);
    }
    cout<<maxi<<endl;
 
    return 0;
}