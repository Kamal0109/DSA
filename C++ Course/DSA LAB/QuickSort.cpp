#include <bits/stdc++.h>
using namespace std;

 
int partition(int arr[], int p, int r){

    int i = i - 1;
    int x = arr[r];

    for(int j = p; p <= r-1; j++){

        if(arr[j] <= x){
            i = i + 1;
            swap(arr[j],arr[i]);
        }

    }

    swap(arr[i+1],arr[r]);
    return i+1;

}


void quickSort(int arr[],int p,int r){
   
   if(p < r){
     int q = partition(arr,p,r);
     quickSort(arr,p,q-1);
     quickSort(arr,q+1,r);
   }

}


int main(){
   
    int arr[] = {10,80,30,90,40,50,70};
    int n = 7;

    quickSort(arr,0,n-1);

    for(int i = 0 ;i < n; i++){
        cout<<arr[i]<<" ";
    }
 

    return 0;
}