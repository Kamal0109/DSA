#include <iostream>
using namespace std;
 

int isSorted(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i+1]<arr[i]){
            return 0;
        }
    }
    return 1;

}

bool isSorts(int arr[],int n){
    // Base case
    if(n==1||n==0){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart=isSorts(arr+1,n-1);
        return remainingPart;
    }

}


int main(){
 
    int arr[6]={1,2,3,4,5,3};
    bool ans=isSorts(arr,6);
    cout<<isSorted(arr,6);
    if(ans){
        cout<<"Array is sorted ";
    }
    else{
        cout<<"Array is not sorted";
    }

    return 0;
}