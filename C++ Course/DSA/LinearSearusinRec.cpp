#include <iostream>
using namespace std;
 

int linearSearch(int arr[],int n,int k){
    if(n==0){
        return 0;
    }
    if(arr[0]==k){
        return 1;
    }
    else{
    int otherPart=linearSearch(arr+1,n-1,k);
    return otherPart;
    }
}

int main(){
    
    int arr[6]={1,3,2,4,8,2};
    cout<<linearSearch(arr,6,8);

 
    return 0;
}