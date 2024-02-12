#include <iostream>
using namespace std;


int partition(int *arr,int s,int e){
    int pivot=0;
    int cnt=0;
    
}


void quickSort(int *arr,int s,int e){
    // Base case
    if(s>e){
        return;
    }
    // Partition
    int p=partition(arr,s,e);
    // Left Part
    quickSort(arr,s,p-1);
    // Right Part
    quickSort(arr,p+1,e);    

}


int main(){
   
    int arr[5]={3,2,4,1,5};
    int s=0;
    int e=4;
    quickSort(arr,s,e);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }

    return 0;
}