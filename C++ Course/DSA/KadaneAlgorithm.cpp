#include <iostream>
using namespace std;


void kadaneAlgo(int arr[],int n){
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    int max=arr[0];
    for(int j=0;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
    cout<<max;
}

 
int main(){
 
    int arr[9]={-2 ,1, -3, 4, -1, 2, 1 ,-5, 4};
    int n=9;
    kadaneAlgo(arr,n);
 
    return 0;
}