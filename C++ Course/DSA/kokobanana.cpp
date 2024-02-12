#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

int maxbanana(vector<int>&piles){

    int maxi = 0;
        for(int i = 0; i < piles.size(); i++){
            maxi = max(maxi, piles[i]);
        }
        
        return maxi;

}


long long calculatetotalhrs(vector<int>& piles, int k){
        int totalHours = 0;
        
        for(int i = 0; i < piles.size(); i++){
            totalHours += ceil((double)piles[i] / (double)k);
        }
        
        return totalHours;
    }


int Solve(int N, vector<int>& piles, int H){
    int low=0;
    int high=maxbanana(piles);

    while(low<high){
        int mid=(low+high)/2;

        long long totalhrs = calculatetotalhrs(piles,mid);

        if(totalhrs <= H)
                high = mid - 1;
            
            else
                low = mid + 1;
        }
        
        return low;

    

}



int main(){
    
    int N,H;
    cin>>N>>H;
    vector<int>piles;
     
    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        piles.push_back(num);
    }

    cout<<Solve<<endl;
 
    return 0;
}