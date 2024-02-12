#include <bits/stdc++.h>
using namespace std;
 
 
int main(){

    int arr[3][3] = {
        {0,3,5},
        {3,0,0},
        {5,4,0},};
    
    int start=0;
    int end=1;
    int cost1=arr[start][end];
    int cost2=INT_MAX;
    
    if(arr[start][1] != 0 && arr[2][end] != 0 ){
        int cost2=arr[start][2] + arr[2][end];
    }
    if(cost1>cost2){
        cout<<"cost1 "<<cost1<<endl;
    }
    else{
        cout<<"cost2 "<<cost2<<endl;
    }

    return 0;
}